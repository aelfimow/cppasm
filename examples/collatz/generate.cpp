#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

struct regs_usage
{
    r64 &value_reg;
    r64 &result_reg;
    r64 &end_value_reg;
    r64 &tmp_reg;
};

static void generate_collatz_length(struct regs_usage &regs)
{
    const std::string func_name { "collatz_length" };
    comment("size_t " + func_name + "(size_t value)");

    comment("value is in " + regs.value_reg.name());

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    XOR(regs.result_reg, regs.result_reg);

    imm64 end_value { 1 };
    MOV(regs.end_value_reg, end_value);

    std::string start("start");
    std::string end("end");
    label(start);

    CMP(regs.value_reg, regs.end_value_reg);
    JE(end);
    {

        comment("Compute (3n + 1) using LEA");
        m64 addr;
        addr.base(regs.value_reg).index(regs.value_reg).scale(2).disp(1);
        LEA(regs.tmp_reg, addr);

        comment("Compute (n / 2)");
        imm8 shift_value { 1 };
        SHR(regs.value_reg, shift_value);

        comment("Overwrite value, if it was odd");
        CMOVC(regs.value_reg, regs.tmp_reg);

        comment("Computation step performed - count it");
        INC(regs.result_reg);

        JMP(start);
    }
    label(end);

    RET();
}

static void generate_collatz_calc(struct regs_usage &regs)
{
    const std::string func_name { "collatz_calc" };
    comment("size_t " + func_name + "(size_t value)");

    comment("value is in " + regs.value_reg.name());

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    comment("Compute (3n + 1) using LEA");
    m64 addr;
    addr.base(regs.value_reg).index(regs.value_reg).scale(2).disp(1);
    LEA(regs.result_reg, addr);

    comment("Compute (n / 2)");
    imm8 shift_value { 1 };
    SHR(regs.value_reg, shift_value);

    comment("Overwrite result, if value was odd");
    CMOVNC(regs.result_reg, regs.value_reg);

    RET();
}

int main(int argc, char *argv[])
try
{
    const std::string usageStr { "Usage: generate windows|linux" };

    if (argc != 2)
    {
        throw std::invalid_argument(usageStr);
    }

    std::string os { argv[1] };

    bool forWindows { os == "windows" };
    bool forLinux { os == "linux" };

    if (!forWindows && !forLinux)
    {
        throw std::invalid_argument(usageStr);
    }

    if (forWindows)
    {
        struct regs_usage regs = { RCX, RAX, R9, RDX };
        generate_collatz_length(regs);
        generate_collatz_calc(regs);
    }

    if (forLinux)
    {
        struct regs_usage regs = { RDI, RAX, R9, RDX };
        generate_collatz_length(regs);
        generate_collatz_calc(regs);
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

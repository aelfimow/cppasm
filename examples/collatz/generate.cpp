#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static void gen_WindowsFunc()
{
    const std::string func_name { "collatz_length" };
    comment("size_t " + func_name + "(size_t value)");

    r64 &value_reg = RCX;
    comment("value is in " + value_reg.name());

    r64 &result_reg = RAX;

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    XOR(result_reg, result_reg);

    r64 &end_value_reg = R9;
    imm64 end_value { 1 };
    MOV(end_value_reg, end_value);

    std::string start("start");
    std::string end("end");
    label(start);

    CMP(value_reg, end_value_reg);
    JE(end);
    {
        r64 &tmp_reg = RDX;

        comment("Compute (3n + 1) using LEA");
        m64 addr;
        addr.base(value_reg).index(value_reg).scale(2).disp(1);
        LEA(tmp_reg, addr);

        comment("Compute (n / 2)");
        imm8 shift_value { 1 };
        r64 &tmp2_reg = R8;
        MOV(tmp2_reg, value_reg);
        SHR(tmp2_reg, shift_value);

        imm8 lsb_bit { 0 };
        BT(value_reg, lsb_bit);

        CMOVC(value_reg, tmp_reg);
        CMOVNC(value_reg, tmp2_reg);

        comment("Computation performed - count it");
        INC(result_reg);

        JMP(start);
    }
    label(end);

    RET();
}

static void gen_LinuxFunc()
{
    const std::string func_name { "collatz_length" };
    comment("size_t " + func_name + "(size_t value)");
    comment("value is in %rdi");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    XOR(RAX, RAX);

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
        gen_WindowsFunc();
    }

    if (forLinux)
    {
        gen_LinuxFunc();
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

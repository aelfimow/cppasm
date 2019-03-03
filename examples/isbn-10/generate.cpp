#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    // Function name to be generated
    const std::string func_name { "isbn10" };
    comment("uint8_t isbn10(const void *p)");
    comment("p is in %rcx");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    struct regs_usage
    {
        r64 &param;
    }
    regs =
    {
        RCX
    };

    m64 p { regs.param };
    r64 &outreg { RAX };

    m8 p_rest { regs.param };
    p_rest.disp(8);

    r64 &num8_reg { R8 };
    r8 &num8_reg_byte { R8L };
    r64 &rest_reg { R9 };
    r64 &count_reg { R10 };
    r64 &sum_reg { regs.param };

    comment("Load numbers of ISBN");
    MOV(num8_reg, p);
    MOVZX(rest_reg, p_rest);

    comment("Index to be incremented from 1 to 9");
    XOR(count_reg, count_reg);
    INC(count_reg);

    comment("Initial value for sum is 0");
    XOR(sum_reg, sum_reg);

    comment("Compute sum for first 8 numbers");
    for (size_t i = 0; i < 8; ++i)
    {
        MOVZX(outreg, num8_reg_byte);
        MUL(count_reg);
        imm8 bits_to_shif { 8 };
        SHR(num8_reg, bits_to_shif);
        INC(count_reg);
        ADD(sum_reg, outreg);
    }

    comment("Compute sum for remaining 9-th number");
    MOV(outreg, rest_reg);
    MUL(count_reg);
    ADD(sum_reg, outreg);

    comment("Update counter twice to get 11");
    INC(count_reg);
    INC(count_reg);

    comment("Compute ISBN");
    MOV(outreg, sum_reg);
    DIV(count_reg);
    MOV(outreg, RDX);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

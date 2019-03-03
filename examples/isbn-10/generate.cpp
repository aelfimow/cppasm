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
        r64 &sum;
        r64 &outreg;
        r64 &num8;
        r8 &num8_byte;
        r64 &rest;
        r64 &count;
    }
    regs =
    {
        RCX,
        RCX,
        RAX,
        R8,
        R8L,
        R9,
        R10
    };

    m64 p { regs.param };

    m8 p_rest { regs.param };
    p_rest.disp(8);

    comment("Load numbers of ISBN");
    MOV(regs.num8, p);
    MOVZX(regs.rest, p_rest);

    comment("Index to be incremented from 1 to 9");
    XOR(regs.count, regs.count);
    INC(regs.count);

    comment("Initial value for sum is 0");
    XOR(regs.sum, regs.sum);

    comment("Compute sum for first 8 numbers");
    for (size_t i = 0; i < 8; ++i)
    {
        MOVZX(regs.outreg, regs.num8_byte);
        MUL(regs.count);
        imm8 bits_to_shif { 8 };
        SHR(regs.num8, bits_to_shif);
        INC(regs.count);
        ADD(regs.sum, regs.outreg);
    }

    comment("Compute sum for remaining 9-th number");
    MOV(regs.outreg, regs.rest);
    MUL(regs.count);
    ADD(regs.sum, regs.outreg);

    comment("Update counter twice to get 11");
    INC(regs.count);
    INC(regs.count);

    comment("Compute ISBN");
    MOV(regs.outreg, regs.sum);
    DIV(regs.count);
    MOV(regs.outreg, RDX);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

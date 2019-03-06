#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    struct regs_usage
    {
        r64 &param;
        r64 &sum;
        r64 &data;
        r8 &data_byte;
        r64 &rest_full;
        r32 &rest_half;
        r8 &rest_byte;
        r64 &tmp;
        r64 &tmp2;
        r64 &modulo_result;
    }
    regs =
    {
        RCX,
        RAX,
        R8,
        R8L,
        R9,
        R9D,
        R9L,
        R10,
        R11,
        RDX
    };

    // Function name to be generated
    const std::string func_name { "isbn13" };
    comment("uint8_t isbn13(const void *p)");
    comment("p is in %rcx");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    m64 p { regs.param };
    m32 p_rest { regs.param };
    p_rest.disp(8);

    comment("Initialize total sum");
    XOR(regs.sum, regs.sum);
    comment("Load 12 ISBN numbers");
    MOV(regs.data, p);
    MOV(regs.rest_half, p_rest);

    comment("Sum up first 8 numbers");
    for (size_t i = 0; i < 4; ++i)
    {
        MOVZX(regs.tmp, regs.data_byte);
        ADD(regs.sum, regs.tmp);
        imm8 bits_to_shift { 8 };
        SHR(regs.data, bits_to_shift);
        MOVZX(regs.tmp, regs.data_byte);
        MOVZX(regs.tmp2, regs.data_byte);
        imm8 bits_to_shift2 { 1 };
        SHL(regs.tmp, bits_to_shift2);
        ADD(regs.tmp, regs.tmp2);
        ADD(regs.sum, regs.tmp);
        SHR(regs.data, bits_to_shift);
    }

    comment("Sum up next 4 numbers");
    for (size_t i = 0; i < 2; ++i)
    {
        MOVZX(regs.tmp, regs.rest_byte);
        ADD(regs.sum, regs.tmp);
        imm8 bits_to_shift { 8 };
        SHR(regs.rest_full, bits_to_shift);
        MOVZX(regs.tmp, regs.rest_byte);
        MOVZX(regs.tmp2, regs.rest_byte);
        imm8 bits_to_shift2 { 1 };
        SHL(regs.tmp, bits_to_shift2);
        ADD(regs.tmp, regs.tmp2);
        ADD(regs.sum, regs.tmp);
        SHR(regs.rest_full, bits_to_shift);
    }

    comment("Compute ISBN");
    imm64 div_number { 10 };
    MOV(regs.tmp, div_number);
    XOR(regs.modulo_result, regs.modulo_result);
    DIV(regs.tmp);
    MOV(RAX, regs.tmp);
    SUB(RAX, regs.modulo_result);
    XOR(regs.modulo_result, regs.modulo_result);
    DIV(regs.tmp);
    MOV(RAX, regs.modulo_result);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

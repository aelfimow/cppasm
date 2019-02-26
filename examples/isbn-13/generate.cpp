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
    const std::string func_name { "isbn13" };
    comment("uint8_t isbn13(const void *p)");
    comment("p is in %rcx");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    r64 &sum_reg { RAX };

    r64 &param_reg { RCX };

    r64 &data_reg { R8 };
    r8 &data_byte_reg { R8L };

    r64 &rest_full_reg { R9 };
    r32 &rest_reg { R9D };
    r8 &rest_byte_reg { R9L };

    r64 &tmp_reg { R10 };
    r64 &tmp2_reg { R11 };

    m64 p { param_reg };
    m32 p_rest { param_reg };
    p_rest.disp(8);

    comment("Initialize total sum");
    XOR(sum_reg, sum_reg);
    comment("Load 12 ISBN numbers");
    MOV(data_reg, p);
    MOV(rest_reg, p_rest);

    comment("Sum up first 8 numbers");
    for (size_t i = 0; i < 4; ++i)
    {
        MOVZX(tmp_reg, data_byte_reg);
        ADD(sum_reg, tmp_reg);
        imm8 bits_to_shift { 8 };
        SHR(data_reg, bits_to_shift);
        MOVZX(tmp_reg, data_byte_reg);
        MOVZX(tmp2_reg, data_byte_reg);
        imm8 bits_to_shift2 { 1 };
        SHL(tmp_reg, bits_to_shift2);
        ADD(tmp_reg, tmp2_reg);
        ADD(sum_reg, tmp_reg);
    }

    comment("Sum up next 4 numbers");
    for (size_t i = 0; i < 4; ++i)
    {
        MOVZX(tmp_reg, rest_byte_reg);
        ADD(sum_reg, tmp_reg);
        imm8 bits_to_shift { 8 };
        SHR(rest_full_reg, bits_to_shift);
        MOVZX(tmp_reg, rest_byte_reg);
        MOVZX(tmp2_reg, rest_byte_reg);
        imm8 bits_to_shift2 { 1 };
        SHL(tmp_reg, bits_to_shift2);
        ADD(tmp_reg, tmp2_reg);
        ADD(sum_reg, tmp_reg);
    }

    comment("Compute ISBN");
    imm64 div_number { 10 };
    MOV(tmp_reg, div_number);
    DIV(tmp_reg);
    MOV(RAX, RDX);
    DIV(tmp_reg);
    MOV(RAX, RDX);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

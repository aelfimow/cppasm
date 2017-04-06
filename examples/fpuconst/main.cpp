#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    auto load_fpu_const = []()
    {
        FLD1();
        FLDL2T();
        FLDL2E();
        FLDPI();
        FLDLG2();
        FLDLN2();
        FLDZ();
    };

    constexpr size_t max = 7U;

    section code { ".text" };
    code.start();

    {
        const std::string func_name { "fpuconst_fp32" };
        comment("void fpuconst_fp32(float *p)");
        comment("p is in %rcx");

        global(func_name);
        label(func_name);

        load_fpu_const();

        imm8 offset { sizeof(float) };
        r64 &buffer_reg { RCX };
        m32 p_buffer { RCX };

        for (size_t i = 0U; i < max; ++i)
        {
            FSTP(p_buffer);

            if (i < (max - 1U))
            {
                ADD(buffer_reg, offset);
            }
        }

        RET();
    }

    {
        const std::string func_name { "fpuconst_fp64" };
        comment("void fpuconst_fp64(double *p)");
        comment("p is in %rcx");

        global(func_name);
        label(func_name);

        load_fpu_const();

        imm8 offset { sizeof(double) };
        r64 &buffer_reg { RCX };
        m64 p_buffer { RCX };

        for (size_t i = 0U; i < max; ++i)
        {
            FSTP(p_buffer);

            if (i < (max - 1U))
            {
                ADD(buffer_reg, offset);
            }
        }

        RET();
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

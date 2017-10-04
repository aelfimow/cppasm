#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static constexpr size_t MaxFpuConsts = 7U;

static void load_fpu_const()
{
    FLD1();
    FLDL2T();
    FLDL2E();
    FLDPI();
    FLDLG2();
    FLDLN2();
    FLDZ();
}

static void gen_fpuconst_fp32()
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

    for (size_t i = 0U; i < MaxFpuConsts; ++i)
    {
        FSTP(p_buffer);

        if (i < (MaxFpuConsts - 1U))
        {
            ADD(buffer_reg, offset);
        }
    }

    RET();
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    gen_fpuconst_fp32();

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

        for (size_t i = 0U; i < MaxFpuConsts; ++i)
        {
            FSTP(p_buffer);

            if (i < (MaxFpuConsts - 1U))
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

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
    m32fp p_buffer { RCX };

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

static void gen_fpuconst_fp64()
{
    const std::string func_name { "fpuconst_fp64" };
    comment("void fpuconst_fp64(double *p)");
    comment("p is in %rcx");

    global(func_name);
    label(func_name);

    load_fpu_const();

    imm8 offset { sizeof(double) };
    r64 &buffer_reg { RCX };
    m64fp p_buffer { RCX };

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

static void gen_fpuconst_zero()
{
    {
        const std::string func_name { "fp32_zero" };

        comment("void " + func_name + "(float *p)");
        comment("p is in %rcx");
        global(func_name);
        label(func_name);

        FLDZ();
        m32fp addr { RCX };
        FSTP(addr);
        RET();
    }

    {
        const std::string func_name { "fp64_zero" };

        comment("void " + func_name + "(double *p)");
        comment("p is in %rcx");
        global(func_name);
        label(func_name);

        FLDZ();
        m64fp addr { RCX };
        FSTP(addr);
        RET();
    }

    {
        const std::string func_name { "fp80_zero" };

        comment("void " + func_name + "(long double *p)");
        comment("p is in %rcx");
        global(func_name);
        label(func_name);

        FLDZ();
        m80fp addr { RCX };
        FSTP(addr);
        RET();
    }
}

static void gen_fpuconst_one()
{
    {
        const std::string func_name { "fp32_one" };

        comment("void " + func_name + "(float *p)");
        comment("p is in %rcx");
        global(func_name);
        label(func_name);

        FLD1();
        m32fp addr { RCX };
        FSTP(addr);
        RET();
    }

    {
        const std::string func_name { "fp64_one" };

        comment("void " + func_name + "(double *p)");
        comment("p is in %rcx");
        global(func_name);
        label(func_name);

        FLD1();
        m64fp addr { RCX };
        FSTP(addr);
        RET();
    }

    {
        const std::string func_name { "fp80_one" };

        comment("void " + func_name + "(long double *p)");
        comment("p is in %rcx");
        global(func_name);
        label(func_name);

        FLD1();
        m80fp addr { RCX };
        FSTP(addr);
        RET();
    }
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    gen_fpuconst_fp32();
    gen_fpuconst_fp64();
    gen_fpuconst_zero();
    gen_fpuconst_one();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

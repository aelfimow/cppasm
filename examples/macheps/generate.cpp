#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"
#include "macheps.h"

template
<
    typename T,
    typename MemAddr
>
void gen_fpu_init(r64 &param_reg, const std::string func_name)
{
    comment("void " + func_name + "(void *param)");
    comment("param is in " + param_reg.name());

    global(func_name);
    label(func_name);

    MemAddr value_addr { param_reg };
    value_addr.disp(offsetof(T, value));

    MemAddr epsilon_addr { param_reg };
    epsilon_addr.disp(offsetof(T, epsilon));

    MemAddr sum_addr { param_reg };
    sum_addr.disp(offsetof(T, sum));

    comment("value = 1.0");
    FLD1();
    FSTP(value_addr);

    comment("epsilon = 1.0");
    FLD1();
    FSTP(epsilon_addr);

    comment("sum = value + epsilon");
    FLD(value_addr);
    FLD(epsilon_addr);

    FADDP();

    FSTP(sum_addr);

    RET();
}

template
<
    typename T,
    typename MemAddr
>
void gen_fpu_compute(r64 &param_reg, const std::string func_name)
{
    comment("void " + func_name + "(void *param)");
    comment("param is in " + param_reg.name());

    global(func_name);
    label(func_name);

    MemAddr value_addr { param_reg };
    value_addr.disp(offsetof(T, value));

    MemAddr epsilon_addr { param_reg };
    epsilon_addr.disp(offsetof(T, epsilon));

    MemAddr sum_addr { param_reg };
    sum_addr.disp(offsetof(T, sum));

    comment("Compute: 2.0");
    FLD1();
    FLD1();
    FADDP();

    comment("Compute: epsilon /= 2.0");
    FLD(epsilon_addr);
    FDIVP();
    FSTP(epsilon_addr);

    comment("Compute: sum = value + epsilon");
    FLD(value_addr);
    FLD(epsilon_addr);
    FADDP();
    FSTP(sum_addr);

    RET();
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    r64 &param_reg { RCX };

    gen_fpu_init<fp32_params, m32fp>(param_reg, "macheps_fp32_init");
    gen_fpu_compute<fp32_params, m32fp>(param_reg, "macheps_fp32_compute");

    gen_fpu_init<fp64_params, m64fp>(param_reg, "macheps_fp64_init");
    gen_fpu_compute<fp64_params, m64fp>(param_reg, "macheps_fp64_compute");

    gen_fpu_init<fp80_params, m80fp>(param_reg, "macheps_fp80_init");
    gen_fpu_compute<fp80_params, m80fp>(param_reg, "macheps_fp80_compute");

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

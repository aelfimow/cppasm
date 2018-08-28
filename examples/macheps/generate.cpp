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
void gen_fpu_init(r64 &param_reg)
{
    const std::string func_name { "macheps_fp32_init" };
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

    FLD1();
    FST(value_addr);
    FSTP(epsilon_addr);

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
void gen_fpu_compute(r64 &param_reg)
{
    const std::string func_name { "macheps_fp32_compute" };
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

    comment("Load epsilon");
    FLD(epsilon_addr);

    comment("Compute: epsilon /= 2.0");
    FDIVP();

    comment("Save epsilon");
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

    gen_fpu_init<fp32_params, m32fp>(param_reg);
    gen_fpu_compute<fp32_params, m32fp>(param_reg);

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

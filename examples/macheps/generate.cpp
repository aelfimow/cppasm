#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

using fp32_t = float;

struct fp32_params
{
    fp32_t value;
    fp32_t epsilon;
    fp32_t sum;
};

static_assert(sizeof(fp32_t) == 4);
static_assert(sizeof(struct fp32_params) == (3 * sizeof(fp32_t)));

template <typename T> void gen_fp32_init(r64 &param_reg)
{
    const std::string func_name { "macheps_fp32_init" };
    comment("void " + func_name + "(void *param)");
    comment("param is in " + param_reg.name());

    global(func_name);
    label(func_name);

    m32fp value_addr { param_reg };
    value_addr.disp(offsetof(T, value));

    m32fp epsilon_addr { param_reg };
    epsilon_addr.disp(offsetof(T, epsilon));

    m32fp sum_addr { param_reg };
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

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    r64 &param_reg { RCX };

    gen_fp32_init<struct fp32_params>(param_reg);

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

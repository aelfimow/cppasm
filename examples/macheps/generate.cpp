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
static_assert(sizeof(fp32_params) == (3 * sizeof(fp32_t)));

static void gen_fp32_init()
{
    const std::string func_name { "macheps_fp32_init" };
    comment("void " + func_name + "(void *param)");
    comment("param is in %rcx");

    global(func_name);
    label(func_name);

    m32fp value { RCX };
    value.disp(offsetof(struct fp32_params, value));

    m32fp epsilon { RCX };
    epsilon.disp(offsetof(struct fp32_params, epsilon));

    m32fp sum { RCX };
    sum.disp(offsetof(struct fp32_params, sum));

    FLD1();
    FST(value);
    FSTP(epsilon);

    FLD(value);
    FLD(epsilon);

    FADDP();

    FSTP(sum);

    RET();
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    gen_fp32_init();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

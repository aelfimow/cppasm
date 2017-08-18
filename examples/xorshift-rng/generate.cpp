#include <iostream>
#include <sstream>
#include <cstdlib>
#include <stdexcept>
#include <vector>

#include "cppasm.h"

struct xorshift_triple
{
    xorshift_triple() = delete;

    xorshift_triple(uint8_t v1, uint8_t v2, uint8_t v3) :
        steps1 { v1 },
        steps2 { v2 },
        steps3 { v3 }
    {
    }

    const uint8_t steps1;
    const uint8_t steps2;
    const uint8_t steps3;
};

// All triples proposed by George Marsaglia in his paper "Xorshift RNGs"
const std::vector<xorshift_triple> all_triples
{
    { 1, 1, 54 },
    { 1, 1, 55 },
    { 1, 3, 45 },
    { 1, 7, 9 },
    { 1, 7, 44 },
    { 1, 7, 46 },
    { 1, 9, 50 },
    { 1, 11, 35 },
    { 1, 11, 50 },
    { 1, 13, 45 },
    { 1, 15, 4 },
    { 1, 15, 63 },
    { 1, 19, 6 },
    { 1, 19, 16 },
    { 1, 23, 14 },
    { 1, 23, 29 },
    { 1, 29, 34 },
    { 1, 35, 5 },
    { 1, 35, 11 },
    { 1, 35, 34 },
    { 1, 45, 37 },
    { 1, 51, 13 },
    { 1, 53, 3 },
    { 1, 59, 14 },
    { 2, 13, 23 },
    { 2, 31, 51 },
    { 2, 31, 53 },
    { 2, 43, 27 },
    { 2, 47, 49 },
    { 3, 1, 11 },
    { 3, 5, 21 },
    { 3, 13, 59 },
    { 3, 21, 31 },
    { 3, 25, 20 },
    { 3, 25, 31 },
    { 3, 25, 56 },
    { 3, 29, 40 },
    { 3, 29, 47 },
    { 3, 29, 49 },
    { 3, 35, 14 },
    { 3, 37, 17 },
    { 3, 43, 4 },
    { 3, 43, 6 },
    { 3, 43, 11 },
    { 3, 51, 16 },
    { 3, 53, 7 },
    { 3, 61, 17 },
    { 3, 61, 26 },
    { 4, 7, 19 },
    { 4, 9, 13 },
    { 4, 15, 51 },
    { 4, 15, 53 },
    { 4, 29, 45 },
    { 4, 29, 49 },
    { 4, 31, 33 },
    { 4, 35, 15 },
    { 4, 35, 21 },
    { 4, 37, 11 },
    { 4, 37, 21 },
    { 4, 41, 19 },
    { 4, 41, 45 },
    { 4, 43, 21 },
    { 4, 43, 31 },
    { 4, 53, 7 },
    { 5, 9, 23 },
    { 5, 11, 54 },
    { 5, 15, 27 },
    { 5, 17, 11 },
    { 5, 23, 36 },
    { 5, 33, 29 },
    { 5, 41, 20 },
    { 5, 45, 16 },
    { 5, 47, 23 },
    { 5, 53, 20 },
    { 5, 59, 33 },
    { 5, 59, 35 },
    { 5, 59, 63 },
    { 6, 1, 17 },
    { 6, 3, 49 },
    { 6, 17, 47 },
    { 6, 23, 27 },
    { 6, 27, 7 },
    { 6, 43, 21 },
    { 6, 49, 29 },
    { 6, 55, 17 },
    { 7, 5, 41 },
    { 7, 5, 47 },
    { 7, 5, 55 },
    { 7, 7, 20 },
    { 7, 9, 38 },
    { 7, 11, 10 },
    { 7, 11, 35 },
    { 7, 13, 58 },
    { 7, 19, 17 },
    { 7, 19, 54 },
    { 7, 23, 8 },
    { 7, 25, 58 },
    { 7, 27, 59 },
    { 7, 33, 8 },
    { 7, 41, 40 },
    { 7, 43, 28 },
    { 7, 51, 24 },
    { 7, 57, 12 },
    { 8, 5, 59 },
    { 8, 9, 25 },
    { 8, 13, 25 },
    { 8, 13, 61 },
    { 8, 15, 21 },
    { 8, 25, 59 },
    { 8, 29, 19 },
    { 8, 31, 17 },
    { 8, 37, 21 },
    { 8, 51, 21 },
    { 9, 1, 27 },
    { 9, 5, 36 },
    { 9, 5, 43 },
    { 9, 7, 18 },
    { 9, 19, 18 },
    { 9, 21, 11 },
    { 9, 21, 20 },
    { 9, 21, 40 },
    { 9, 23, 57 },
    { 9, 27, 10 },
    { 9, 29, 12 },
    { 9, 29, 37 },
    { 9, 37, 31 },
    { 9, 41, 45 },
    { 10, 7, 33 },
    { 10, 27, 59 },
    { 10, 53, 13 },
    { 11, 5, 32 },
    { 11, 5, 34 },
    { 11, 5, 43 },
    { 11, 5, 45 },
    { 11, 9, 14 },
    { 11, 9, 34 },
    { 11, 13, 40 },
    { 11, 15, 37 },
    { 11, 23, 42 },
    { 11, 23, 56 },
    { 11, 25, 48 },
    { 11, 27, 26 },
    { 11, 29, 14 },
    { 11, 31, 18 },
    { 11, 53, 23 },
    { 12, 1, 31 },
    { 12, 3, 13 },
    { 12, 3, 49 },
    { 12, 7, 13 },
    { 12, 11, 47 },
    { 12, 25, 27 },
    { 12, 39, 49 },
    { 12, 43, 19 },
    { 13, 3, 40 },
    { 13, 3, 53 },
    { 13, 7, 17 },
    { 13, 9, 15 },
    { 13, 9, 50 },
    { 13, 13, 19 },
    { 13, 17, 43 },
    { 13, 19, 28 },
    { 13, 19, 47 },
    { 13, 21, 18 },
    { 13, 21, 49 },
    { 13, 29, 35 },
    { 13, 35, 30 },
    { 13, 35, 38 },
    { 13, 47, 23 },
    { 13, 51, 21 },
    { 14, 13, 17 },
    { 14, 15, 19 },
    { 14, 23, 33 },
    { 14, 31, 45 },
    { 14, 47, 15 },
    { 15, 1, 19 },
    { 15, 5, 37 },
    { 15, 13, 28 },
    { 15, 13, 52 },
    { 15, 17, 27 },
    { 15, 19, 63 },
    { 15, 21, 46 },
    { 15, 23, 23 },
    { 15, 45, 17 },
    { 15, 47, 16 },
    { 15, 49, 26 },
    { 16, 5, 17 },
    { 16, 7, 39 },
    { 16, 11, 19 },
    { 16, 11, 27 },
    { 16, 13, 55 },
    { 16, 21, 35 },
    { 16, 25, 43 },
    { 16, 27, 53 },
    { 16, 47, 17 },
    { 17, 15, 58 },
    { 17, 23, 29 },
    { 17, 23, 51 },
    { 17, 23, 52 },
    { 17, 27, 22 },
    { 17, 45, 22 },
    { 17, 47, 28 },
    { 17, 47, 29 },
    { 17, 47, 54 },
    { 18, 1, 25 },
    { 18, 3, 43 },
    { 18, 19, 19 },
    { 18, 25, 21 },
    { 18, 41, 23 },
    { 19, 7, 36 },
    { 19, 7, 55 },
    { 19, 13, 37 },
    { 19, 15, 46 },
    { 19, 21, 52 },
    { 19, 25, 20 },
    { 19, 41, 21 },
    { 19, 43, 27 },
    { 20, 1, 31 },
    { 20, 5, 29 },
    { 21, 1, 27 },
    { 21, 9, 29 },
    { 21, 13, 52 },
    { 21, 15, 28 },
    { 21, 15, 29 },
    { 21, 17, 24 },
    { 21, 17, 30 },
    { 21, 17, 48 },
    { 21, 21, 32 },
    { 21, 21, 34 },
    { 21, 21, 37 },
    { 21, 21, 38 },
    { 21, 21, 40 },
    { 21, 21, 41 },
    { 21, 21, 43 },
    { 21, 41, 23 },
    { 22, 3, 39 },
    { 23, 9, 38 },
    { 23, 9, 48 },
    { 23, 9, 57 },
    { 23, 13, 38 },
    { 23, 13, 58 },
    { 23, 13, 61 },
    { 23, 17, 25 },
    { 23, 17, 54 },
    { 23, 17, 56 },
    { 23, 17, 62 },
    { 23, 41, 34 },
    { 23, 41, 51 },
    { 24, 9, 35 },
    { 24, 11, 29 },
    { 24, 25, 25 },
    { 24, 31, 35 },
    { 25, 7, 46 },
    { 25, 7, 49 },
    { 25, 9, 39 },
    { 25, 11, 57 },
    { 25, 13, 29 },
    { 25, 13, 39 },
    { 25, 13, 62 },
    { 25, 15, 47 },
    { 25, 21, 44 },
    { 25, 27, 27 },
    { 25, 27, 53 },
    { 25, 33, 36 },
    { 25, 39, 54 },
    { 28, 9, 55 },
    { 28, 11, 53 },
    { 29, 27, 37 },
    { 31, 1, 51 },
    { 31, 25, 37 },
    { 31, 27, 35 },
    { 33, 31, 43 },
    { 33, 31, 55 },
    { 43, 21, 46 },
    { 49, 15, 61 },
    { 55, 9, 56 }
};

static void gen_XorshiftFunc(const xorshift_triple &triple, r64 &arg_reg)
{
    // Construct function name
    std::ostringstream ss;
    ss << "xorshift_func";
    ss << "_" << static_cast<size_t>(triple.steps1);
    ss << "_" << static_cast<size_t>(triple.steps2);
    ss << "_" << static_cast<size_t>(triple.steps3);
    const std::string func_name { ss.str() };

    // Generate some meaningful comments with function name and argument etc.
    const std::string str1 { "uint64_t " + func_name + "(uint64_t rng_state)" };
    comment(str1);

    r64 &ret_reg { RAX };   // Register containing return value

    const std::string str2 { "Argument rng_state is in " + arg_reg.name() };
    comment(str2);
    const std::string str3 { "Return value is in " + ret_reg.name() };
    comment(str3);

    // Generate function
    global(func_name);
    label(func_name);

    imm8 steps1 { triple.steps1 };
    imm8 steps2 { triple.steps2 };
    imm8 steps3 { triple.steps3 };

    // 1st shift step
    MOV(ret_reg, arg_reg);
    SHL(arg_reg, steps1);
    XOR(ret_reg, arg_reg);

    // 2nd shift step
    MOV(arg_reg, ret_reg);
    SHR(ret_reg, steps2);
    XOR(arg_reg, ret_reg);

    // 3thd shift step
    MOV(ret_reg, arg_reg);
    SHL(arg_reg, steps3);
    XOR(ret_reg, arg_reg);

    RET();
}

int main(int argc, char *argv[])
try
{
    const std::string usageStr { "Usage: generate windows|linux" };

    if (argc != 2)
    {
        throw std::invalid_argument(usageStr);
    }

    std::string os { argv[1] };

    bool forWindows { os == "windows" };
    bool forLinux { os == "linux" };

    r64 *arg_reg { nullptr };

    if (forWindows)
    {
        arg_reg = &RCX;
    }

    if (forLinux)
    {
        arg_reg = &RDI;
    }

    if (arg_reg == nullptr)
    {
        throw std::invalid_argument(usageStr);
    }

    section code { ".text" };
    code.start();

    // Go through all tripples and generate corresponding function
    for (auto triple: all_triples)
    {
        gen_XorshiftFunc(triple, *arg_reg);
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

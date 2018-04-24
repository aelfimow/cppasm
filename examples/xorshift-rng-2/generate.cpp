#include <iostream>
#include <sstream>
#include <cstdlib>
#include <stdexcept>
#include <vector>

#include "cppasm.h"

static void gen_XorshiftFunc()
{
    // Construct function name
    std::ostringstream ss;
    ss << "xorshift_func";
    const std::string func_name { ss.str() };

    // Generate some meaningful comments with function name and argument etc.
    const std::string str1 { "uint64_t " + func_name + "(uint64_t triple, uint64_t rng_state)" };
    comment(str1);

    r64 &triple_reg { RCX };
    r8  &shift_value_reg { CL };
    r64 &rng_state_reg { RDX };
    r64 &ret_reg { RAX };   // Register containing return value

    const std::string str2 { "rng_state is in " + rng_state_reg.name() };
    comment(str2);
    const std::string str3 { "Return value is in " + ret_reg.name() };
    comment(str3);

    // Generate function
    global(func_name);
    label(func_name);

    imm8 step { 8 };

    // 1st shift step
    MOV(ret_reg, rng_state_reg);
    SHL(rng_state_reg, shift_value_reg);
    XOR(ret_reg, rng_state_reg);

    // 2nd shift step
    SHR(triple_reg, step);
    MOV(rng_state_reg, ret_reg);
    SHR(ret_reg, shift_value_reg);
    XOR(rng_state_reg, ret_reg);

    // 3thd shift step
    SHR(triple_reg, step);
    MOV(ret_reg, rng_state_reg);
    SHL(rng_state_reg, shift_value_reg);
    XOR(ret_reg, rng_state_reg);

    RET();
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    gen_XorshiftFunc();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

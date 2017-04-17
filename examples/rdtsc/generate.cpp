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
    const std::string func_name { "rdtsc_func" };
    comment("uint64_t rdtsc_func(void)");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    // Synchronize the execution pipeline calling CPUID
    {
        r64 &reg_to_save { RBX };

        PUSH(reg_to_save);
        XOR(RAX, RAX);
        CPUID();
        POP(reg_to_save);
    }

    // Get time stamp counter
    RDTSC();

    imm8 bits_to_shift { 32 };
    SHL(RDX, bits_to_shift);

    XOR(RAX, RDX);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

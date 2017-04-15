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
    const std::string func_name { "clflush_func" };
    comment("void clflush_func(void *p1, void *p2)");
    comment("p1 is in %rcx");
    comment("p2 is in %rdx");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    m64 p1(RCX);
    m64 p2(RDX);

    MOV(RAX, p1);
    MOV(RAX, p1);
    MOV(RAX, p1);

    MOV(RAX, p2);
    MOV(RAX, p2);
    MOV(RAX, p2);

    CLFLUSH(p1);
    CLFLUSH(p2);

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

struct reg_usage
{
    r64 &param1;
    r64 &param2;
};

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    // Function name to be generated
    std::string const func_name { "clflush_func" };
    comment("void " + func_name + "(void *p1, void *p2)");

    struct reg_usage regs =
    {
        RCX,
        RDX
    };

    comment("p1 is in " + regs.param1.name());
    comment("p2 is in " + regs.param2.name());

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    m64 p1(regs.param1);
    m64 p2(regs.param2);

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

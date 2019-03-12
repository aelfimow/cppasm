#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

struct reg_usage
{
    r64 &param1;
    r64 &param2;
    r64 &tmp;
};

static void usage()
{
    std::cerr << "Specify: windows or linux" << std::endl;
}

static void generate(struct reg_usage &regs)
{
    // Function name to be generated
    std::string const func_name { "clflush_func" };
    comment("void " + func_name + "(void *p1, void *p2)");

    comment("p1 is in " + regs.param1.name());
    comment("p2 is in " + regs.param2.name());

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    m64 p1(regs.param1);
    m64 p2(regs.param2);

    MOV(regs.tmp, p1);
    MOV(regs.tmp, p1);
    MOV(regs.tmp, p1);

    MOV(regs.tmp, p2);
    MOV(regs.tmp, p2);
    MOV(regs.tmp, p2);

    CLFLUSH(p1);
    CLFLUSH(p2);

    RET();
}

int main(int argc, char *argv[])
try
{
    if (argc != 2)
    {
        usage();
        return EXIT_FAILURE;
    }

    std::string const argstr { argv[1] };

    bool const is_windows = (argstr == "windows");
    bool const is_linux = (argstr == "linux");

    if (!is_windows && !is_linux)
    {
        usage();
        return EXIT_FAILURE;
    }

    if (is_windows)
    {
        struct reg_usage regs = { RCX, RDX, RAX };

        generate(regs);
    }

    if (is_linux)
    {
        struct reg_usage regs = { RDI, RSI, RAX };

        generate(regs);
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

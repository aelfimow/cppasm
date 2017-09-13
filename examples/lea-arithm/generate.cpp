#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static void gen_Func1()
{
    // Function name to be generated
    const std::string func_name { "a_plus_b" };
    comment("size_t " + func_name + "(size_t a, size_t b)");
    comment("a is in %rcx");
    comment("b is in %rdx");

    global(func_name);

    label(func_name);

    m64 addr { RCX, RDX };

    LEA(RAX, addr);

    RET();
}

static void gen_Func2()
{
    // Function name to be generated
    const std::string func_name { "a_plus_2b" };
    comment("size_t " + func_name + "(size_t a, size_t b)");
    comment("a is in %rcx");
    comment("b is in %rdx");

    global(func_name);

    label(func_name);

    m64 addr { RCX, RDX, 2 };

    LEA(RAX, addr);

    RET();
}

static void gen_Func3()
{
    // Function name to be generated
    const std::string func_name { "a_plus_4b" };
    comment("size_t " + func_name + "(size_t a, size_t b)");
    comment("a is in %rcx");
    comment("b is in %rdx");

    global(func_name);

    label(func_name);

    m64 addr { RCX, RDX, 4 };

    LEA(RAX, addr);

    RET();
}

static void gen_Func4()
{
    // Function name to be generated
    const std::string func_name { "a_plus_8b" };
    comment("size_t " + func_name + "(size_t a, size_t b)");
    comment("a is in %rcx");
    comment("b is in %rdx");

    global(func_name);

    label(func_name);

    m64 addr { RCX, RDX, 8 };

    LEA(RAX, addr);

    RET();
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    gen_Func1();
    gen_Func2();
    gen_Func3();
    gen_Func4();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

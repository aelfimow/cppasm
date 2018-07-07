#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "cppasm.h"

extern void gen_Instruction1();
extern void gen_Instruction2();
extern void gen_Instruction3();
extern void gen_Instruction4();
extern void gen_Instruction5();
extern void gen_Instruction6();
extern void gen_Instruction7();
extern void gen_Instruction8();
extern void gen_Instruction9();
extern void gen_Instruction10();
extern void gen_Instruction12();
extern void gen_Instruction16();
extern void gen_Instruction26();
extern void gen_Instruction36();

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };

    code.start();

    gen_Instruction1();
    gen_Instruction2();
    gen_Instruction3();
    gen_Instruction4();
    gen_Instruction5();
    gen_Instruction6();
    gen_Instruction7();
    gen_Instruction8();
    gen_Instruction9();
    gen_Instruction10();
    gen_Instruction12();
    gen_Instruction16();
    gen_Instruction26();
    gen_Instruction36();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

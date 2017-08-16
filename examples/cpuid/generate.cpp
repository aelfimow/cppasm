#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static void gen_Windows()
{
    // Function name to be generated
    const std::string func_name { "execute_cpuid" };
    comment("void " + func_name + "(size_t RAX_value, size_t RCX_value, size_t *pOut)");
    comment("RAX_value is in %rcx");
    comment("RCX_value is in %rdx");
    comment("pOut is in %r8");

    global(func_name);

    section code { ".text" };
    code.start();

    label(func_name);

    r64 &reg_to_save = RBX;
    PUSH(reg_to_save);  // this register must be saved (and restored later)

    MOV(RAX, RCX);  // RAX_value
    MOV(RCX, RDX);  // RCX_value

    CPUID();

    size_t offset { 0 };
    size_t step { 8 };
    m64 buffer { R8 };

    buffer.disp(offset);
    MOV(buffer, RAX);

    offset += step;
    buffer.disp(offset);
    MOV(buffer, RBX);

    offset += step;
    buffer.disp(offset);
    MOV(buffer, RCX);

    offset += step;
    buffer.disp(offset);
    MOV(buffer, RDX);

    POP(reg_to_save);   // restore register

    RET();
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    gen_Windows();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

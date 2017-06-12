#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "cppasm.h"

static const r16 *all_r16[] =
{
    &AX,
    &BX,
    &CX,
    &DX,
    &BP,
    &SI,
    &DI,
    &SP,
    &R8W,
    &R9W,
    &R10W,
    &R11W,
    &R12W,
    &R13W,
    &R14W,
    &R15W
};

static const r32 *all_r32[] =
{
    &EAX,
    &EBX,
    &ECX,
    &EDX,
    &EBP,
    &ESI,
    &EDI,
    &ESP,
    &R8D,
    &R9D,
    &R10D,
    &R11D,
    &R12D,
    &R13D,
    &R14D,
    &R15D
};

static const r32 *all_r32_addr[] =
{
    &EAX,
    &EBX,
    &ECX,
    &EDX,
    &EBP,
    &ESI,
    &EDI,
    &R8D,
    &R9D,
    &R10D,
    &R11D,
    &R12D,
    &R13D,
    &R14D,
    &R15D
};

static const r64 *all_r64_addr[] =
{
    &RAX,
    &RBX,
    &RCX,
    &RDX,
    &RBP,
    &RSI,
    &RDI,
    &R8,
    &R9,
    &R10,
    &R11,
    &R12,
    &R13,
    &R14,
    &R15
};

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };
    code.start();

    // Function name
    const std::string func_name { "thousand_nops" };

    // Generate comments
    const std::string str { "void " + func_name + "(void)" };
    comment(str);

    // Generate function
    global(func_name);
    label(func_name);

    NOP();
    NOP();
    NOP();
    NOP();
    NOP();
    NOP();
    NOP();
    NOP();
    NOP();

    for (auto one_r16: all_r16)
    {
        NOP(*one_r16);
    }

    for (auto one_r32: all_r32)
    {
        NOP(*one_r32);
    }

    for (auto regA: all_r32_addr)
    {
        m16 addr { *regA };
        NOP(addr);
    }

    for (auto regA: all_r32_addr)
    {
        for (auto regB: all_r32_addr)
        {
            m16 addr { *regA, *regB };
            NOP(addr);
        }
    }

    for (auto regA: all_r64_addr)
    {
        m16 addr { *regA };
        NOP(addr);
    }

    for (auto regA: all_r64_addr)
    {
        for (auto regB: all_r64_addr)
        {
            m16 addr { *regA, *regB };
            NOP(addr);
        }
    }

    for (auto regA: all_r32_addr)
    {
        m32 addr { *regA };
        NOP(addr);
    }

    for (auto regA: all_r32_addr)
    {
        for (auto regB: all_r32_addr)
        {
            m32 addr { *regA, *regB };
            NOP(addr);
        }
    }

    for (auto regA: all_r64_addr)
    {
        m32 addr { *regA };
        NOP(addr);
    }

    for (auto regA: all_r64_addr)
    {
        for (auto regB: all_r64_addr)
        {
            m32 addr { *regA, *regB };
            NOP(addr);
        }
    }

    RET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

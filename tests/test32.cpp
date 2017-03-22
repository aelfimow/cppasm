#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "cppasm.h"

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };

    code.start();

    {
        imm8 value { 0xAA };

        MOV(AL, value);
        MOV(AH, value);
        MOV(BL, value);
        MOV(BH, value);
        MOV(CL, value);
        MOV(CH, value);
        MOV(DL, value);
        MOV(DH, value);
    }

    {
        imm16 value { 0x1122 };

        MOV(AX, value);
        MOV(BX, value);
        MOV(CX, value);
        MOV(DX, value);
        MOV(BP, value);
        MOV(SI, value);
        MOV(DI, value);
        MOV(SP, value);
    }

    MOV(CS, AX);
    MOV(DS, AX);
    MOV(SS, AX);
    MOV(ES, AX);
    MOV(FS, AX);
    MOV(GS, AX);

    {
        imm32 value { 0x11223344 };

        MOV(EAX, value);
        MOV(EBX, value);
        MOV(ECX, value);
        MOV(EDX, value);
        MOV(EBP, value);
        MOV(ESI, value);
        MOV(EDI, value);
        MOV(ESP, value);
    }

    {
        MOV(CR0, EAX);
        MOV(CR1, EAX);
        MOV(CR2, EAX);
        MOV(CR3, EAX);
        MOV(CR4, EAX);
        MOV(CR5, EAX);
        MOV(CR6, EAX);
        MOV(CR7, EAX);
        MOV(CR8, EAX);

        MOV(DR0, EAX);
        MOV(DR1, EAX);
        MOV(DR2, EAX);
        MOV(DR3, EAX);
        MOV(DR4, EAX);
        MOV(DR5, EAX);
        MOV(DR6, EAX);
        MOV(DR7, EAX);
    }

    AAA();
    {
        imm8 value { 8 };
        AAD();
        AAD(value);
    }

    {
        imm8 value { 8 };
        AAM();
        AAM(value);
    }

    AAS();

    MONITOR();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

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

    {
        REP(); MOVSB();
        REP(); MOVSW();
        REP(); MOVSD();
        REP(); CMPSB();
        REP(); CMPSW();
        REP(); CMPSD();
        REP(); SCASB();
        REP(); SCASW();
        REP(); SCASD();
        REP(); LODSB();
        REP(); LODSW();
        REP(); LODSD();
        REP(); STOSB();
        REP(); STOSW();
        REP(); STOSD();

        REPZ(); MOVSB();
        REPZ(); MOVSW();
        REPZ(); MOVSD();
        REPZ(); CMPSB();
        REPZ(); CMPSW();
        REPZ(); CMPSD();
        REPZ(); SCASB();
        REPZ(); SCASW();
        REPZ(); SCASD();
        REPZ(); LODSB();
        REPZ(); LODSW();
        REPZ(); LODSD();
        REPZ(); STOSB();
        REPZ(); STOSW();
        REPZ(); STOSD();

        REPE(); MOVSB();
        REPE(); MOVSW();
        REPE(); MOVSD();
        REPE(); CMPSB();
        REPE(); CMPSW();
        REPE(); CMPSD();
        REPE(); SCASB();
        REPE(); SCASW();
        REPE(); SCASD();
        REPE(); LODSB();
        REPE(); LODSW();
        REPE(); LODSD();
        REPE(); STOSB();
        REPE(); STOSW();
        REPE(); STOSD();

        REPNZ(); MOVSB();
        REPNZ(); MOVSW();
        REPNZ(); MOVSD();
        REPNZ(); CMPSB();
        REPNZ(); CMPSW();
        REPNZ(); CMPSD();
        REPNZ(); SCASB();
        REPNZ(); SCASW();
        REPNZ(); SCASD();
        REPNZ(); LODSB();
        REPNZ(); LODSW();
        REPNZ(); LODSD();
        REPNZ(); STOSB();
        REPNZ(); STOSW();
        REPNZ(); STOSD();

        REPNE(); MOVSB();
        REPNE(); MOVSW();
        REPNE(); MOVSD();
        REPNE(); CMPSB();
        REPNE(); CMPSW();
        REPNE(); CMPSD();
        REPNE(); SCASB();
        REPNE(); SCASW();
        REPNE(); SCASD();
        REPNE(); LODSB();
        REPNE(); LODSW();
        REPNE(); LODSD();
        REPNE(); STOSB();
        REPNE(); STOSW();
        REPNE(); STOSD();
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

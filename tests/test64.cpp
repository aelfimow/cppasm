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
        MOV(SIL, value);
        MOV(DIL, value);
        MOV(SPL, value);
        MOV(R8L, value);
        MOV(R9L, value);
        MOV(R10L, value);
        MOV(R11L, value);
        MOV(R12L, value);
        MOV(R13L, value);
        MOV(R14L, value);
        MOV(R15L, value);
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
        MOV(R8W, value);
        MOV(R9W, value);
        MOV(R10W, value);
        MOV(R11W, value);
        MOV(R12W, value);
        MOV(R13W, value);
        MOV(R14W, value);
        MOV(R15W, value);

        MOV(CS, AX);
        MOV(DS, AX);
        MOV(SS, AX);
        MOV(ES, AX);
        MOV(FS, AX);
        MOV(GS, AX);
    }

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
        MOV(R8D, value);
        MOV(R9D, value);
        MOV(R10D, value);
        MOV(R11D, value);
        MOV(R12D, value);
        MOV(R13D, value);
        MOV(R14D, value);
        MOV(R15D, value);
    }

    {
        MOV(CR0, RAX);
        MOV(CR1, RAX);
        MOV(CR2, RAX);
        MOV(CR3, RAX);
        MOV(CR4, RAX);
        MOV(CR5, RAX);
        MOV(CR6, RAX);
        MOV(CR7, RAX);
        MOV(CR8, RAX);

        MOV(DR0, RAX);
        MOV(DR1, RAX);
        MOV(DR2, RAX);
        MOV(DR3, RAX);
        MOV(DR4, RAX);
        MOV(DR5, RAX);
        MOV(DR6, RAX);
        MOV(DR7, RAX);
    }

    {
        imm64 value { 0x1122334455667788 };

        MOV(RAX, value);
        MOV(RBX, value);
        MOV(RCX, value);
        MOV(RDX, value);
        MOV(RBP, value);
        MOV(RSI, value);
        MOV(RDI, value);
        MOV(RSP, value);
        MOV(R8, value);
        MOV(R9, value);
        MOV(R10, value);
        MOV(R11, value);
        MOV(R12, value);
        MOV(R13, value);
        MOV(R14, value);
        MOV(R15, value);
    }

    MONITOR();

    {
        imm8 value { 0x11 };
        m8 mem { EAX, EBX };
        ADC(AL, value);
        ADC(BL, value);
        ADC(mem, value);
        ADC(mem, CL);
        ADC(CL, mem);
    }

    {
        imm8 value8 { 0x42 };
        imm16 value16 { 0x1122 };
        m16 mem { EAX, EBX };
        ADC(AX, value16);
        ADC(BX, value16);
        ADC(mem, value16);
        ADC(mem, value8);
        ADC(mem, AX);
        ADC(AX, mem);
        ADC(DX, value8);
    }

    {
        imm8 value8 { 0x42 };
        imm32 value32 { 0x11223344 };
        m32 mem { EAX, EBX };
        ADC(EAX, value32);
        ADC(EBX, value32);
        ADC(mem, value32);
        ADC(mem, value8);
        ADC(mem, ECX);
        ADC(ECX, mem);
        ADC(ECX, value8);
    }

    {
        imm8 value8 { 0x42 };
        imm32 value32 { 0x11223344 };
        m64 mem { RAX, RBX };
        ADC(RAX, value32);
        ADC(RBX, value32);
        ADC(mem, value32);
        ADC(mem, value8);
        ADC(RDX, value8);
        ADC(mem, RCX);
        ADC(RCX, mem);
    }

    {
        REP(MOVSB);
        REP(MOVSW);
        REP(MOVSD);
        REP(MOVSQ);
        REP(CMPSB);
        REP(CMPSW);
        REP(CMPSD);
        REP(CMPSQ);
        REP(SCASB);
        REP(SCASW);
        REP(SCASD);
        REP(SCASQ);
        REP(LODSB);
        REP(LODSW);
        REP(LODSD);
        REP(LODSQ);
        REP(STOSB);
        REP(STOSW);
        REP(STOSD);
        REP(STOSQ);

        REPE(MOVSB);
        REPE(MOVSW);
        REPE(MOVSD);
        REPE(MOVSQ);
        REPE(CMPSB);
        REPE(CMPSW);
        REPE(CMPSD);
        REPE(CMPSQ);
        REPE(SCASB);
        REPE(SCASW);
        REPE(SCASD);
        REPE(SCASQ);
        REPE(LODSB);
        REPE(LODSW);
        REPE(LODSD);
        REPE(LODSQ);
        REPE(STOSB);
        REPE(STOSW);
        REPE(STOSD);
        REPE(STOSQ);

        REPZ(MOVSB);
        REPZ(MOVSW);
        REPZ(MOVSD);
        REPZ(MOVSQ);
        REPZ(CMPSB);
        REPZ(CMPSW);
        REPZ(CMPSD);
        REPZ(CMPSQ);
        REPZ(SCASB);
        REPZ(SCASW);
        REPZ(SCASD);
        REPZ(SCASQ);
        REPZ(LODSB);
        REPZ(LODSW);
        REPZ(LODSD);
        REPZ(LODSQ);
        REPZ(STOSB);
        REPZ(STOSW);
        REPZ(STOSD);
        REPZ(STOSQ);

        REPNE(MOVSB);
        REPNE(MOVSW);
        REPNE(MOVSD);
        REPNE(MOVSQ);
        REPNE(CMPSB);
        REPNE(CMPSW);
        REPNE(CMPSD);
        REPNE(CMPSQ);
        REPNE(SCASB);
        REPNE(SCASW);
        REPNE(SCASD);
        REPNE(SCASQ);
        REPNE(LODSB);
        REPNE(LODSW);
        REPNE(LODSD);
        REPNE(LODSQ);
        REPNE(STOSB);
        REPNE(STOSW);
        REPNE(STOSD);
        REPNE(STOSQ);

        REPNZ(MOVSB);
        REPNZ(MOVSW);
        REPNZ(MOVSD);
        REPNZ(MOVSQ);
        REPNZ(CMPSB);
        REPNZ(CMPSW);
        REPNZ(CMPSD);
        REPNZ(CMPSQ);
        REPNZ(SCASB);
        REPNZ(SCASW);
        REPNZ(SCASD);
        REPNZ(SCASQ);
        REPNZ(LODSB);
        REPNZ(LODSW);
        REPNZ(LODSD);
        REPNZ(LODSQ);
        REPNZ(STOSB);
        REPNZ(STOSW);
        REPNZ(STOSD);
        REPNZ(STOSQ);
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

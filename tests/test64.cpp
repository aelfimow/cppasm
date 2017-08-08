#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "cppasm.h"

static void gen_Instruction_Arithm1(Instruction_Arithm1 &instr, const std::string &descr)
{
    comment(descr);

    imm8 value8 { 0x11 };
    imm16 value16 { 0x1122 };
    imm32 value32 { 0x11223344 };
    imm64 value64 { 0x1122334455667788 };

    m8 addr8 { RBX, RCX };
    m16 addr16 { RCX, RDX };
    m32 addr32 { RDX, RSI };
    m64 addr64 { RSI, RDI };

    instr(AL, value8);
    instr(AX, value16);
    instr(EAX, value32);
    instr(RAX, value32);

    instr(DL, addr8);
    instr(DX, addr16);
    instr(EDX, addr32);
    instr(RDX, addr64);

    instr(addr8, DL);
    instr(addr16, DX);
    instr(addr32, EDX);
    instr(addr64, RDX);
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };

    code.start();

    comment("MOV instruction");
    label("MOV_instruction");
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

        MOV(RAX, CR0);
        MOV(RAX, CR1);
        MOV(RAX, CR2);
        MOV(RAX, CR3);
        MOV(RAX, CR4);
        MOV(RAX, CR5);
        MOV(RAX, CR6);
        MOV(RAX, CR7);
        MOV(RAX, CR8);

        MOV(DR0, RAX);
        MOV(DR1, RAX);
        MOV(DR2, RAX);
        MOV(DR3, RAX);
        MOV(DR4, RAX);
        MOV(DR5, RAX);
        MOV(DR6, RAX);
        MOV(DR7, RAX);

        MOV(RAX, DR0);
        MOV(RAX, DR1);
        MOV(RAX, DR2);
        MOV(RAX, DR3);
        MOV(RAX, DR4);
        MOV(RAX, DR5);
        MOV(RAX, DR6);
        MOV(RAX, DR7);
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

    {
        m64 addr { RBX, RCX };

        MOV(RAX, addr);
        MOV(RAX, addr.scale(1));
        MOV(RAX, addr.scale(2));
        MOV(RAX, addr.scale(4));
        MOV(RAX, addr.scale(8));
    }

    gen_Instruction_Arithm1(ADD, "ADD instruction");
    gen_Instruction_Arithm1(ADC, "ADC instruction");
    gen_Instruction_Arithm1(SUB, "SUB instruction");
    gen_Instruction_Arithm1(SBB, "SBB instruction");
    gen_Instruction_Arithm1(CMP, "CMP instruction");
    gen_Instruction_Arithm1(AND, "AND instruction");
    gen_Instruction_Arithm1(OR, "OR instruction");
    gen_Instruction_Arithm1(XOR, "XOR instruction");

    {
        REP(); MOVSB();
        REP(); MOVSW();
        REP(); MOVSD();
        REP(); MOVSQ();
        REP(); CMPSB();
        REP(); CMPSW();
        REP(); CMPSD();
        REP(); CMPSQ();
        REP(); SCASB();
        REP(); SCASW();
        REP(); SCASD();
        REP(); SCASQ();
        REP(); LODSB();
        REP(); LODSW();
        REP(); LODSD();
        REP(); LODSQ();
        REP(); STOSB();
        REP(); STOSW();
        REP(); STOSD();
        REP(); STOSQ();

        REPE(); MOVSB();
        REPE(); MOVSW();
        REPE(); MOVSD();
        REPE(); MOVSQ();
        REPE(); CMPSB();
        REPE(); CMPSW();
        REPE(); CMPSD();
        REPE(); CMPSQ();
        REPE(); SCASB();
        REPE(); SCASW();
        REPE(); SCASD();
        REPE(); SCASQ();
        REPE(); LODSB();
        REPE(); LODSW();
        REPE(); LODSD();
        REPE(); LODSQ();
        REPE(); STOSB();
        REPE(); STOSW();
        REPE(); STOSD();
        REPE(); STOSQ();

        REPZ(); MOVSB();
        REPZ(); MOVSW();
        REPZ(); MOVSD();
        REPZ(); MOVSQ();
        REPZ(); CMPSB();
        REPZ(); CMPSW();
        REPZ(); CMPSD();
        REPZ(); CMPSQ();
        REPZ(); SCASB();
        REPZ(); SCASW();
        REPZ(); SCASD();
        REPZ(); SCASQ();
        REPZ(); LODSB();
        REPZ(); LODSW();
        REPZ(); LODSD();
        REPZ(); LODSQ();
        REPZ(); STOSB();
        REPZ(); STOSW();
        REPZ(); STOSD();
        REPZ(); STOSQ();

        REPNE(); MOVSB();
        REPNE(); MOVSW();
        REPNE(); MOVSD();
        REPNE(); MOVSQ();
        REPNE(); CMPSB();
        REPNE(); CMPSW();
        REPNE(); CMPSD();
        REPNE(); CMPSQ();
        REPNE(); SCASB();
        REPNE(); SCASW();
        REPNE(); SCASD();
        REPNE(); SCASQ();
        REPNE(); LODSB();
        REPNE(); LODSW();
        REPNE(); LODSD();
        REPNE(); LODSQ();
        REPNE(); STOSB();
        REPNE(); STOSW();
        REPNE(); STOSD();
        REPNE(); STOSQ();

        REPNZ(); MOVSB();
        REPNZ(); MOVSW();
        REPNZ(); MOVSD();
        REPNZ(); MOVSQ();
        REPNZ(); CMPSB();
        REPNZ(); CMPSW();
        REPNZ(); CMPSD();
        REPNZ(); CMPSQ();
        REPNZ(); SCASB();
        REPNZ(); SCASW();
        REPNZ(); SCASD();
        REPNZ(); SCASQ();
        REPNZ(); LODSB();
        REPNZ(); LODSW();
        REPNZ(); LODSD();
        REPNZ(); LODSQ();
        REPNZ(); STOSB();
        REPNZ(); STOSW();
        REPNZ(); STOSD();
        REPNZ(); STOSQ();
    }

    // SSE3 x87-FP integer convertion instruction
    {
        m16 addr1 { RAX };
        m32 addr2 { RBX };
        m64 addr3 { RCX };

        FISTTP(addr1);
        FISTTP(addr2);
        FISTTP(addr3);
    }

    // SSE3 specialized 128-bit unaligned data load instruction
    {
        m128 addr1 { RAX };

        LDDQU(XMM0, addr1);
    }

    // SSE3 SIMD floating-point packed ADD/SUB instructions
    {
        m128 addr1 { RAX };

        ADDSUBPS(XMM0, XMM1);
        ADDSUBPD(XMM0, XMM1);

        ADDSUBPS(XMM0, addr1);
        ADDSUBPD(XMM0, addr1);
    }

    // SSE3 SIMD floating-point horizontal ADD/SUB instructions
    {
        m128 addr1 { RAX };

        HADDPS(XMM0, XMM1);
        HSUBPS(XMM0, XMM1);
        HADDPD(XMM0, XMM1);
        HSUBPD(XMM0, XMM1);

        HADDPS(XMM0, addr1);
        HSUBPS(XMM0, addr1);
        HADDPD(XMM0, addr1);
        HSUBPD(XMM0, addr1);
    }

    // SSE3 SIMD floating-point LOAD/MOVE/DUPLICATE instructions
    {
        m128 addr1 { RAX };
        m64 addr2 { RAX };

        MOVSHDUP(XMM0, XMM1);
        MOVSHDUP(XMM0, addr1);

        MOVSLDUP(XMM0, XMM1);
        MOVSLDUP(XMM0, addr1);

        MOVDDUP(XMM0, XMM1);
        MOVDDUP(XMM0, addr2);
    }

    // SSE3 agent synchronization instructions
    MONITOR();
    MWAIT();

    CWD();
    CDQ();
    CQO();
    IRET();
    IRETD();
    IRETQ();
    MOVSB();
    MOVSW();
    MOVSD();
    MOVSQ();
    CMPSB();
    CMPSW();
    CMPSD();
    CMPSQ();
    SCASB();
    SCASW();
    SCASD();
    SCASQ();
    LODSB();
    LODSW();
    LODSD();
    LODSQ();
    STOSB();
    STOSW();
    STOSD();
    STOSQ();
    INSB();
    INSW();
    INSD();
    OUTSB();
    OUTSW();
    OUTSD();
    CLC();
    CLD();
    CLI();
    CMC();
    LAHF();
    SAHF();
    PUSHF();
    POPFQ();
    STC();
    STI();
    STD();
    UD();
    UD1();
    UD2();
    CPUID();
    XLAT();
    FPREM();
    FPREM1();
    FABS();
    FCHS();
    FRNDINT();
    FSCALE();
    FSQRT();
    FXTRACT();
    FTST();
    FXAM();
    FSIN();
    FSINCOS();
    FCOS();
    FPTAN();
    FPATAN();
    F2XM1();
    FYL2X();
    FYL2XP1();
    FLD1();
    FLDL2T();
    FLDL2E();
    FLDPI();
    FLDLG2();
    FLDLN2();
    FLDZ();
    FINCSTP();
    FDECSTP();
    FINIT();
    FNINIT();
    FCLEX();
    FNCLEX();
    FNOP();
    EMMS();
    SFENCE();
    LFENCE();
    MFENCE();
    PAUSE();
    MONITOR();
    MWAIT();
    CLTS();
    INVD();
    WBINVD();
    HLT();
    RSM();
    RDMSR();
    WRMSR();
    RDPMC();
    RDTSC();
    RDTSCP();
    SYSENTER();
    SYSEXIT();
    SYSCALL();
    SYSRET();

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

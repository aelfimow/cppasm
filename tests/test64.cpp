#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "cppasm.h"

static void gen_Instruction1_Type1(Instruction1_Type1 &instr)
{
    instr();
}

static void gen_Instruction1_Type2(Instruction1_Type2 &instr)
{
    m64 addr { RAX };

    instr(addr);
}

static void gen_Instruction1_Type3(Instruction1_Type3 &instr)
{
    instr(XMM1, XMM0);
}

static void gen_Instruction1_Type4(Instruction1_Type4 &instr, std::string &L)
{
    instr(L);
}

static void gen_Instruction1_Type5(Instruction1_Type5 &instr)
{
    instr(ST(0), ST(1));
}

static void gen_Instruction1_Type6(Instruction1_Type6 &instr)
{
    m16 addr { RAX };

    instr(addr);
}

static void gen_Instruction_Arithm1(Instruction26_Type1 &instr, const std::string &descr)
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

    // Fused-multiply-add (FMA) extensions
    {
        VFMADD132PD(XMM0, XMM1, XMM2);
        VFMADD213PD(XMM0, XMM1, XMM2);
        VFMADD231PD(XMM0, XMM1, XMM2);
        VFMADD132PS(XMM0, XMM1, XMM2);
        VFMADD213PS(XMM0, XMM1, XMM2);
        VFMADD231PS(XMM0, XMM1, XMM2);
        VFMADDSUB132PD(XMM0, XMM1, XMM2);
        VFMADDSUB213PD(XMM0, XMM1, XMM2);
        VFMADDSUB231PD(XMM0, XMM1, XMM2);
        VFMADDSUB132PS(XMM0, XMM1, XMM2);
        VFMADDSUB213PS(XMM0, XMM1, XMM2);
        VFMADDSUB231PS(XMM0, XMM1, XMM2);
        VFMSUBADD132PD(XMM0, XMM1, XMM2);
        VFMSUBADD213PD(XMM0, XMM1, XMM2);
        VFMSUBADD231PD(XMM0, XMM1, XMM2);
        VFMSUBADD132PS(XMM0, XMM1, XMM2);
        VFMSUBADD213PS(XMM0, XMM1, XMM2);
        VFMSUBADD231PS(XMM0, XMM1, XMM2);
        VFMSUB132PD(XMM0, XMM1, XMM2);
        VFMSUB213PD(XMM0, XMM1, XMM2);
        VFMSUB231PD(XMM0, XMM1, XMM2);
        VFMSUB132PS(XMM0, XMM1, XMM2);
        VFMSUB213PS(XMM0, XMM1, XMM2);
        VFMSUB231PS(XMM0, XMM1, XMM2);
        VFNMADD132PD(XMM0, XMM1, XMM2);
        VFNMADD213PD(XMM0, XMM1, XMM2);
        VFNMADD231PD(XMM0, XMM1, XMM2);
        VFNMADD132PS(XMM0, XMM1, XMM2);
        VFNMADD213PS(XMM0, XMM1, XMM2);
        VFNMADD231PS(XMM0, XMM1, XMM2);
        VFNMSUB132PD(XMM0, XMM1, XMM2);
        VFNMSUB213PD(XMM0, XMM1, XMM2);
        VFNMSUB231PD(XMM0, XMM1, XMM2);
        VFNMSUB132PS(XMM0, XMM1, XMM2);
        VFNMSUB213PS(XMM0, XMM1, XMM2);
        VFNMSUB231PS(XMM0, XMM1, XMM2);

        VFMADD132PD(YMM0, YMM1, YMM2);
        VFMADD213PD(YMM0, YMM1, YMM2);
        VFMADD231PD(YMM0, YMM1, YMM2);
        VFMADD132PS(YMM0, YMM1, YMM2);
        VFMADD213PS(YMM0, YMM1, YMM2);
        VFMADD231PS(YMM0, YMM1, YMM2);
        VFMADDSUB132PD(YMM0, YMM1, YMM2);
        VFMADDSUB213PD(YMM0, YMM1, YMM2);
        VFMADDSUB231PD(YMM0, YMM1, YMM2);
        VFMADDSUB132PS(YMM0, YMM1, YMM2);
        VFMADDSUB213PS(YMM0, YMM1, YMM2);
        VFMADDSUB231PS(YMM0, YMM1, YMM2);
        VFMSUBADD132PD(YMM0, YMM1, YMM2);
        VFMSUBADD213PD(YMM0, YMM1, YMM2);
        VFMSUBADD231PD(YMM0, YMM1, YMM2);
        VFMSUBADD132PS(YMM0, YMM1, YMM2);
        VFMSUBADD213PS(YMM0, YMM1, YMM2);
        VFMSUBADD231PS(YMM0, YMM1, YMM2);
        VFMSUB132PD(YMM0, YMM1, YMM2);
        VFMSUB213PD(YMM0, YMM1, YMM2);
        VFMSUB231PD(YMM0, YMM1, YMM2);
        VFMSUB132PS(YMM0, YMM1, YMM2);
        VFMSUB213PS(YMM0, YMM1, YMM2);
        VFMSUB231PS(YMM0, YMM1, YMM2);
        VFNMADD132PD(YMM0, YMM1, YMM2);
        VFNMADD213PD(YMM0, YMM1, YMM2);
        VFNMADD231PD(YMM0, YMM1, YMM2);
        VFNMADD132PS(YMM0, YMM1, YMM2);
        VFNMADD213PS(YMM0, YMM1, YMM2);
        VFNMADD231PS(YMM0, YMM1, YMM2);
        VFNMSUB132PD(YMM0, YMM1, YMM2);
        VFNMSUB213PD(YMM0, YMM1, YMM2);
        VFNMSUB231PD(YMM0, YMM1, YMM2);
        VFNMSUB132PS(YMM0, YMM1, YMM2);
        VFNMSUB213PS(YMM0, YMM1, YMM2);
        VFNMSUB231PS(YMM0, YMM1, YMM2);
    }

    gen_Instruction1_Type1(CWD);
    gen_Instruction1_Type1(CDQ);
    gen_Instruction1_Type1(CQO);
    gen_Instruction1_Type1(LEAVE);
    gen_Instruction1_Type1(IRET);
    gen_Instruction1_Type1(IRETD);
    gen_Instruction1_Type1(IRETQ);
    gen_Instruction1_Type1(MOVSB);
    gen_Instruction1_Type1(MOVSW);
    gen_Instruction1_Type1(MOVSD);
    gen_Instruction1_Type1(MOVSQ);
    gen_Instruction1_Type1(CMPSB);
    gen_Instruction1_Type1(CMPSW);
    gen_Instruction1_Type1(CMPSD);
    gen_Instruction1_Type1(CMPSQ);
    gen_Instruction1_Type1(SCASB);
    gen_Instruction1_Type1(SCASW);
    gen_Instruction1_Type1(SCASD);
    gen_Instruction1_Type1(SCASQ);
    gen_Instruction1_Type1(LODSB);
    gen_Instruction1_Type1(LODSW);
    gen_Instruction1_Type1(LODSD);
    gen_Instruction1_Type1(LODSQ);
    gen_Instruction1_Type1(STOSB);
    gen_Instruction1_Type1(STOSW);
    gen_Instruction1_Type1(STOSD);
    gen_Instruction1_Type1(STOSQ);
    gen_Instruction1_Type1(INSB);
    gen_Instruction1_Type1(INSW);
    gen_Instruction1_Type1(INSD);
    gen_Instruction1_Type1(OUTSB);
    gen_Instruction1_Type1(OUTSW);
    gen_Instruction1_Type1(OUTSD);
    gen_Instruction1_Type1(CLC);
    gen_Instruction1_Type1(CLD);
    gen_Instruction1_Type1(CLI);
    gen_Instruction1_Type1(CMC);
    gen_Instruction1_Type1(LAHF);
    gen_Instruction1_Type1(SAHF);
    gen_Instruction1_Type1(PUSHF);
    gen_Instruction1_Type1(POPF);
    gen_Instruction1_Type1(POPFQ);
    gen_Instruction1_Type1(STC);
    gen_Instruction1_Type1(STI);
    gen_Instruction1_Type1(STD);
    gen_Instruction1_Type1(UD);
    gen_Instruction1_Type1(UD1);
    gen_Instruction1_Type1(UD2);
    gen_Instruction1_Type1(CPUID);
    gen_Instruction1_Type1(XLAT);
    gen_Instruction1_Type1(XGETBV);
    gen_Instruction1_Type1(FPREM);
    gen_Instruction1_Type1(FPREM1);
    gen_Instruction1_Type1(FABS);
    gen_Instruction1_Type1(FCHS);
    gen_Instruction1_Type1(FRNDINT);
    gen_Instruction1_Type1(FSCALE);
    gen_Instruction1_Type1(FSQRT);
    gen_Instruction1_Type1(FXTRACT);
    gen_Instruction1_Type1(FCOMPP);
    gen_Instruction1_Type1(FUCOMPP);
    gen_Instruction1_Type1(FTST);
    gen_Instruction1_Type1(FXAM);
    gen_Instruction1_Type1(FSIN);
    gen_Instruction1_Type1(FSINCOS);
    gen_Instruction1_Type1(FCOS);
    gen_Instruction1_Type1(FPTAN);
    gen_Instruction1_Type1(FPATAN);
    gen_Instruction1_Type1(F2XM1);
    gen_Instruction1_Type1(FYL2X);
    gen_Instruction1_Type1(FYL2XP1);
    gen_Instruction1_Type1(FLD1);
    gen_Instruction1_Type1(FLDL2T);
    gen_Instruction1_Type1(FLDL2E);
    gen_Instruction1_Type1(FLDPI);
    gen_Instruction1_Type1(FLDLG2);
    gen_Instruction1_Type1(FLDLN2);
    gen_Instruction1_Type1(FLDZ);
    gen_Instruction1_Type1(FINCSTP);
    gen_Instruction1_Type1(FDECSTP);
    gen_Instruction1_Type1(FINIT);
    gen_Instruction1_Type1(FNINIT);
    gen_Instruction1_Type1(FCLEX);
    gen_Instruction1_Type1(FNCLEX);
    gen_Instruction1_Type1(FNOP);
    gen_Instruction1_Type1(EMMS);
    gen_Instruction1_Type1(SFENCE);
    gen_Instruction1_Type1(LFENCE);
    gen_Instruction1_Type1(MFENCE);
    gen_Instruction1_Type1(PAUSE);
    gen_Instruction1_Type1(MONITOR);
    gen_Instruction1_Type1(MWAIT);
    gen_Instruction1_Type1(VZEROALL);
    gen_Instruction1_Type1(VZEROUPPER);
    gen_Instruction1_Type1(CLAC);
    gen_Instruction1_Type1(STAC);
    gen_Instruction1_Type1(CLTS);
    gen_Instruction1_Type1(INVD);
    gen_Instruction1_Type1(WBINVD);
    gen_Instruction1_Type1(HLT);
    gen_Instruction1_Type1(RSM);
    gen_Instruction1_Type1(RDMSR);
    gen_Instruction1_Type1(WRMSR);
    gen_Instruction1_Type1(RDPMC);
    gen_Instruction1_Type1(RDTSC);
    gen_Instruction1_Type1(RDTSCP);
    gen_Instruction1_Type1(SYSENTER);
    gen_Instruction1_Type1(SYSEXIT);
    gen_Instruction1_Type1(XSETBV);
    gen_Instruction1_Type1(SYSCALL);
    gen_Instruction1_Type1(SYSRET);

    gen_Instruction1_Type2(CLFLUSH);
    gen_Instruction1_Type2(CLFLUSHOPT);
    gen_Instruction1_Type2(XSAVE);
    gen_Instruction1_Type2(XSAVEC);
    gen_Instruction1_Type2(XSAVEOPT);
    gen_Instruction1_Type2(XRSTOR);
    gen_Instruction1_Type2(FSTENV);
    gen_Instruction1_Type2(FNSTENV);
    gen_Instruction1_Type2(FLDENV);
    gen_Instruction1_Type2(FSAVE);
    gen_Instruction1_Type2(FNSAVE);
    gen_Instruction1_Type2(FRSTOR);
    gen_Instruction1_Type2(FXSAVE);
    gen_Instruction1_Type2(FXRSTOR);
    gen_Instruction1_Type2(PREFETCHT0);
    gen_Instruction1_Type2(PREFETCHT1);
    gen_Instruction1_Type2(PREFETCHT2);
    gen_Instruction1_Type2(PREFETCHNTA);
    gen_Instruction1_Type2(PREFETCHW);
    gen_Instruction1_Type2(PREFETCHWT1);
    gen_Instruction1_Type2(LGDT);
    gen_Instruction1_Type2(LIDT);
    gen_Instruction1_Type2(SIDT);
    gen_Instruction1_Type2(INVLPG);
    gen_Instruction1_Type2(XRSTORS);
    gen_Instruction1_Type2(XRSTORS64);
    gen_Instruction1_Type2(XSAVES);
    gen_Instruction1_Type2(XSAVES64);

    gen_Instruction1_Type3(MOVLHPS);
    gen_Instruction1_Type3(MOVHLPS);
    gen_Instruction1_Type3(MASKMOVDQU);

    std::string L { "Instruction1_Type4_Label" };
    label(L);
    gen_Instruction1_Type4(JA, L);
    gen_Instruction1_Type4(JAE, L);
    gen_Instruction1_Type4(JB, L);
    gen_Instruction1_Type4(JBE, L);
    gen_Instruction1_Type4(JC, L);
    gen_Instruction1_Type4(JECXZ, L);
    gen_Instruction1_Type4(JRCXZ, L);
    gen_Instruction1_Type4(JE, L);
    gen_Instruction1_Type4(JG, L);
    gen_Instruction1_Type4(JGE, L);
    gen_Instruction1_Type4(JL, L);
    gen_Instruction1_Type4(JLE, L);
    gen_Instruction1_Type4(JNA, L);
    gen_Instruction1_Type4(JNAE, L);
    gen_Instruction1_Type4(JNB, L);
    gen_Instruction1_Type4(JNBE, L);
    gen_Instruction1_Type4(JNC, L);
    gen_Instruction1_Type4(JNE, L);
    gen_Instruction1_Type4(JNG, L);
    gen_Instruction1_Type4(JNGE, L);
    gen_Instruction1_Type4(JNL, L);
    gen_Instruction1_Type4(JNLE, L);
    gen_Instruction1_Type4(JNO, L);
    gen_Instruction1_Type4(JNP, L);
    gen_Instruction1_Type4(JNS, L);
    gen_Instruction1_Type4(JNZ, L);
    gen_Instruction1_Type4(JO, L);
    gen_Instruction1_Type4(JP, L);
    gen_Instruction1_Type4(JPE, L);
    gen_Instruction1_Type4(JPO, L);
    gen_Instruction1_Type4(JS, L);
    gen_Instruction1_Type4(JZ, L);
    gen_Instruction1_Type4(LOOP, L);
    gen_Instruction1_Type4(LOOPE, L);
    gen_Instruction1_Type4(LOOPNE, L);
    gen_Instruction1_Type4(LOOPZ, L);
    gen_Instruction1_Type4(LOOPNZ, L);

    gen_Instruction1_Type5(FCMOVB);
    gen_Instruction1_Type5(FCMOVE);
    gen_Instruction1_Type5(FCMOVBE);
    gen_Instruction1_Type5(FCMOVU);
    gen_Instruction1_Type5(FCMOVNB);
    gen_Instruction1_Type5(FCMOVNE);
    gen_Instruction1_Type5(FCMOVNBE);
    gen_Instruction1_Type5(FCMOVNU);
    gen_Instruction1_Type5(FCOMI);
    gen_Instruction1_Type5(FCOMIP);
    gen_Instruction1_Type5(FUCOMI);
    gen_Instruction1_Type5(FUCOMIP);

    gen_Instruction1_Type6(FSTCW);
    gen_Instruction1_Type6(FNSTCW);
    gen_Instruction1_Type6(FLDCW);

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

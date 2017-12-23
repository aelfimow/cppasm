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
    m32 addr { EAX };

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
    m16 addr { EAX };

    instr(addr);
}

static void gen_Instruction1_Type7(Instruction1_Type7 &instr)
{
    m64 addr { EAX };

    instr(addr);
}

static void gen_Instruction1_Type9(Instruction1_Type9 &instr)
{
    imm16 param1 { 65535 };
    imm8 param2 { 255 };

    instr(param1, param2);
}

static void gen_Instruction1_Type10(Instruction1_Type10 &instr)
{
    imm8 param1 { 255 };

    instr(param1);
}

static void gen_Instruction1_Type11(Instruction1_Type11 &instr)
{
    instr();
    STOSB();
}

static void gen_Instruction1_Type12(Instruction1_Type12 &instr)
{
    m80bcd addr { EAX };

    instr(addr);
}

static void gen_Instruction1_Type13(Instruction1_Type13 &instr)
{
    instr(ST(0));
}

static void gen_Instruction1_Type14(Instruction1_Type14 &instr)
{
    m32 addr { EAX };

    instr(addr);
}

static void gen_Instruction1_Type15(Instruction1_Type15 &instr)
{
    instr(MM1, MM0);
}

static void gen_Instruction1_Type16(Instruction1_Type16 &instr)
{
    m64 addr { EAX };

    instr(addr, MM0);
}

static void gen_Instruction1_Type17(Instruction1_Type17 &instr)
{
    m128 addr { EAX };

    instr(addr, XMM0);
}

static void gen_Instruction1_Type18(Instruction1_Type18 &instr)
{
    m64 addr { EAX };

    instr(XMM0, addr);
}

static void gen_Instruction1_Type19(Instruction1_Type19 &instr)
{
    m128 addr { EAX };

    instr(addr, XMM0);
}

static void gen_Instruction1_Type20(Instruction1_Type20 &instr)
{
    instr(XMM0, MM0);
}

static void gen_Instruction1_Type21(Instruction1_Type21 &instr)
{
    instr(MM0, XMM0);
}

static void gen_Instruction1_Type22(Instruction1_Type22 &instr)
{
    imm8 shift1 { 1U };
    imm8 shift2 { 128U };

    instr(XMM0, shift1);
    instr(XMM0, shift2);
}

static void gen_Instruction1_Type23(Instruction1_Type23 &instr)
{
    m128 addr { EAX };

    instr(XMM0, addr);
}

static void gen_Instruction1_Type24(Instruction1_Type24 &instr)
{
    m128 addr { EAX };

    instr(XMM0, addr);
}

static void gen_Instruction1_Type25(Instruction1_Type25 &instr)
{
    m64 addr { EAX };

    instr(YMM0, addr);
}

static void gen_Instruction1_Type26(Instruction1_Type26 &instr)
{
    m128 addr { EAX };

    instr(YMM0, addr);
}

static void gen_Instruction2_Type1(Instruction2_Type1 &instr)
{
    imm8 value { 0 };
    instr();
    instr(value);
}

static void gen_Instruction2_Type2(Instruction2_Type2 &instr)
{
    imm16 value { 65535 };
    instr();
    instr(value);
}

static void gen_Instruction2_Type3(Instruction2_Type3 &instr)
{
    instr(EAX);
}

static void gen_Instruction2_Type4(Instruction2_Type4 &instr)
{
    instr(EAX, XMM0);
}

static void gen_Instruction2_Type5(Instruction2_Type5 &instr)
{
    instr();
    instr(ST(1));
}

static void gen_Instruction2_Type6(Instruction2_Type6 &instr)
{
    instr(AX);

    m16 addr { EAX };
    instr(addr);
}

static void gen_Instruction2_Type7(Instruction2_Type7 &instr)
{
    instr(AL);

    m8 addr { EAX };
    instr(addr);
}

static void gen_Instruction2_Type8(Instruction2_Type8 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EAX };
    instr(BX, addr1);
    instr(EBX, addr2);
}

static void gen_Instruction2_Type9(Instruction2_Type9 &instr)
{
    m64 addr { EAX };
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction2_Type10(Instruction2_Type10 &instr)
{
    m128 addr { EAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type11(Instruction2_Type11 &instr)
{
    m32 addr { EAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type12(Instruction2_Type12 &instr)
{
    m128 addr { EAX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type13(Instruction2_Type13 &instr)
{
    m32 addr { EAX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type14(Instruction2_Type14 &instr)
{
    m64 addr { EAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type15(Instruction2_Type15 &instr)
{
    m64 addr { EAX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type16(Instruction2_Type16 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction2_Type17(Instruction2_Type17 &instr)
{
    m64 addr { EAX };
    instr(XMM0, MM0);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type18(Instruction2_Type18 &instr)
{
    m64 addr { EAX };
    instr(MM0, XMM0);
    instr(MM0, addr);
}

static void gen_Instruction2_Type19(Instruction2_Type19 &instr)
{
    m128 addr { EAX };
    instr(MM0, XMM0);
    instr(MM0, addr);
}

static void gen_Instruction2_Type20(Instruction2_Type20 &instr)
{
    instr();
    instr(ST(1), ST(0));
}

static void gen_Instruction2_Type21(Instruction2_Type21 &instr)
{
    m64 addr { EAX };
    imm8 mask { 255 };
    instr(MM0, MM1, mask);
    instr(MM0, addr, mask);
}

static void gen_Instruction2_Type22(Instruction2_Type22 &instr)
{
    m32 addr1 { EAX };
    instr(addr1, ECX);
}

static void gen_Instruction2_Type23(Instruction2_Type23 &instr)
{
    m8 addr { EAX };
    imm8 mask { 255 };
    instr(XMM0, EAX, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type24(Instruction2_Type24 &instr)
{
    m32 addr { EBX };
    imm8 mask { 255 };
    instr(XMM0, EAX, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type27(Instruction2_Type27 &instr)
{
    m16 addr { EAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type28(Instruction2_Type28 &instr)
{
    m64 addr { EAX };
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, XMM1, addr);
}

static void gen_Instruction2_Type29(Instruction2_Type29 &instr)
{
    m32 addr { EAX };
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, XMM1, addr);
}

static void gen_Instruction2_Type30(Instruction2_Type30 &instr)
{
    imm8 mask { 255 };
    m128 addr { EAX };
    instr(XMM0, XMM1, XMM2, mask);
    instr(XMM0, XMM1, addr, mask);
}

static void gen_Instruction2_Type31(Instruction2_Type31 &instr)
{
    m128 addr1 { EAX };
    m256 addr2 { EBX };
    instr(XMM0, addr1);
    instr(YMM0, addr2);
}

static void gen_Instruction2_Type32(Instruction2_Type32 &instr)
{
    m128 addr1 { EAX };
    m256 addr2 { EBX };
    instr(addr1, XMM0);
    instr(addr2, YMM0);
}

static void gen_Instruction2_Type33(Instruction2_Type33 &instr)
{
    m32 addr { EAX };
    instr(XMM0, addr);
    instr(YMM0, addr);
}

static void gen_Instruction2_Type34(Instruction2_Type34 &instr)
{
    imm8 mask { 255 };
    m128 addr { EAX };
    instr(XMM0, YMM0, mask);
    instr(addr, YMM0, mask);
}

static void gen_Instruction2_Type35(Instruction2_Type35 &instr)
{
    imm8 mask { 255 };
    m128 addr { EAX };
    instr(YMM0, YMM1, XMM0, mask);
    instr(YMM0, YMM1, addr, mask);
}

static void gen_Instruction2_Type36(Instruction2_Type36 &instr)
{
    imm8 mask { 255 };
    m256 addr { EAX };
    instr(YMM0, YMM1, YMM2, mask);
    instr(YMM0, YMM1, addr, mask);
}

static void gen_Instruction3_Type1(Instruction3_Type1 &instr)
{
    m32 addr { EAX };
    instr(AX, addr);
    instr(EAX, addr);
}

static void gen_Instruction3_Type2(Instruction3_Type2 &instr)
{
    instr(AX);
    instr(EAX);
}

static void gen_Instruction3_Type3(Instruction3_Type3 &instr)
{
    m32 addr { EAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction3_Type4(Instruction3_Type4 &instr)
{
    m64 addr { EAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction3_Type5(Instruction3_Type5 &instr)
{
    m128 addr { EAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction3_Type6(Instruction3_Type6 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    m64 addr3 { ECX };
    instr(addr1);
    instr(addr2);
    instr(addr3);
}

static void gen_Instruction3_Type7(Instruction3_Type7 &instr)
{
    m32fp addr1 { EAX };
    m64fp addr2 { EBX };
    instr(addr1);
    instr(addr2);
    instr(ST(0));
}

static void gen_Instruction3_Type8(Instruction3_Type8 &instr)
{
    m32fp addr1 { EAX };
    m64fp addr2 { EBX };
    instr(addr1);
    instr(addr2);
    instr(ST(1), ST(0));
}

static void gen_Instruction3_Type9(Instruction3_Type9 &instr)
{
    imm8 mask { 255 };
    m8 addr { EAX };
    instr(EAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

static void gen_Instruction3_Type10(Instruction3_Type10 &instr)
{
    imm8 mask { 255 };
    m32 addr { EAX };
    instr(EAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };

    code.start();

    gen_Instruction1_Type1(PUSHA);
    gen_Instruction1_Type1(PUSHAD);
    gen_Instruction1_Type1(POPA);
    gen_Instruction1_Type1(POPAD);
    gen_Instruction1_Type1(AAA);
    gen_Instruction1_Type1(AAS);
    gen_Instruction1_Type1(DAA);
    gen_Instruction1_Type1(DAS);
    gen_Instruction1_Type1(INTO);
    gen_Instruction1_Type1(POPFD);

    gen_Instruction1_Type1(CWD);
    gen_Instruction1_Type1(CDQ);
    gen_Instruction1_Type1(LEAVE);
    gen_Instruction1_Type1(IRET);
    gen_Instruction1_Type1(IRETD);
    gen_Instruction1_Type1(MOVSB);
    gen_Instruction1_Type1(MOVSW);
    gen_Instruction1_Type1(MOVSD);
    gen_Instruction1_Type1(CMPSB);
    gen_Instruction1_Type1(CMPSW);
    gen_Instruction1_Type1(CMPSD);
    gen_Instruction1_Type1(SCASB);
    gen_Instruction1_Type1(SCASW);
    gen_Instruction1_Type1(SCASD);
    gen_Instruction1_Type1(LODSB);
    gen_Instruction1_Type1(LODSW);
    gen_Instruction1_Type1(LODSD);
    gen_Instruction1_Type1(STOSB);
    gen_Instruction1_Type1(STOSW);
    gen_Instruction1_Type1(STOSD);
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
    gen_Instruction1_Type2(XSAVES);

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
    gen_Instruction1_Type4(JCXZ, L);
    gen_Instruction1_Type4(JECXZ, L);
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

    gen_Instruction1_Type7(CMPXCHG8B);

    gen_Instruction1_Type9(ENTER);

    gen_Instruction1_Type10(INT);

    gen_Instruction1_Type11(REP);
    gen_Instruction1_Type11(REPE);
    gen_Instruction1_Type11(REPZ);
    gen_Instruction1_Type11(REPNE);
    gen_Instruction1_Type11(REPNZ);

    gen_Instruction1_Type12(FBLD);
    gen_Instruction1_Type12(FBSTP);

    gen_Instruction1_Type13(FFREE);

    gen_Instruction1_Type14(LDMXCSR);
    gen_Instruction1_Type14(STMXCSR);
    gen_Instruction1_Type14(VLDMXCSR);
    gen_Instruction1_Type14(VSTMXCSR);

    gen_Instruction1_Type15(MASKMOVQ);

    gen_Instruction1_Type16(MOVNTQ);

    gen_Instruction1_Type17(MOVNTPS);

    gen_Instruction1_Type18(MOVHPD);
    gen_Instruction1_Type18(MOVLPD);

    gen_Instruction1_Type19(MOVNTPD);
    gen_Instruction1_Type19(MOVNTDQ);

    gen_Instruction1_Type20(MOVQ2DQ);

    gen_Instruction1_Type21(MOVDQ2Q);

    gen_Instruction1_Type22(PSLLDQ);
    gen_Instruction1_Type22(PSRLDQ);

    gen_Instruction1_Type23(LDDQU);

    gen_Instruction1_Type24(MOVNTDQA);

    gen_Instruction1_Type25(VBROADCASTSD);

    gen_Instruction1_Type26(VBROADCASTF128);

    gen_Instruction2_Type1(AAD);
    gen_Instruction2_Type1(AAM);

    gen_Instruction2_Type2(RET);
    gen_Instruction2_Type2(RET_FAR);

    gen_Instruction2_Type3(RDFSBASE);
    gen_Instruction2_Type3(RDGSBASE);
    gen_Instruction2_Type3(WRFSBASE);
    gen_Instruction2_Type3(WRGSBASE);
    gen_Instruction2_Type3(BSWAP);

    gen_Instruction2_Type4(MOVMSKPS);
    gen_Instruction2_Type4(MOVMSKPD);

    gen_Instruction2_Type5(FXCH);
    gen_Instruction2_Type5(FUCOM);
    gen_Instruction2_Type5(FUCOMP);

    gen_Instruction2_Type6(FSTSW);
    gen_Instruction2_Type6(FNSTSW);
    gen_Instruction2_Type6(LLDT);
    gen_Instruction2_Type6(LMSW);
    gen_Instruction2_Type6(VERR);
    gen_Instruction2_Type6(VERW);
    gen_Instruction2_Type6(LTR);

    gen_Instruction2_Type7(SETA);
    gen_Instruction2_Type7(SETAE);
    gen_Instruction2_Type7(SETB);
    gen_Instruction2_Type7(SETBE);
    gen_Instruction2_Type7(SETC);
    gen_Instruction2_Type7(SETE);
    gen_Instruction2_Type7(SETG);
    gen_Instruction2_Type7(SETGE);
    gen_Instruction2_Type7(SETL);
    gen_Instruction2_Type7(SETLE);
    gen_Instruction2_Type7(SETNA);
    gen_Instruction2_Type7(SETNAE);
    gen_Instruction2_Type7(SETNB);
    gen_Instruction2_Type7(SETNBE);
    gen_Instruction2_Type7(SETNC);
    gen_Instruction2_Type7(SETNE);
    gen_Instruction2_Type7(SETNG);
    gen_Instruction2_Type7(SETNGE);
    gen_Instruction2_Type7(SETNL);
    gen_Instruction2_Type7(SETNLE);
    gen_Instruction2_Type7(SETNO);
    gen_Instruction2_Type7(SETNP);
    gen_Instruction2_Type7(SETNS);
    gen_Instruction2_Type7(SETNZ);
    gen_Instruction2_Type7(SETO);
    gen_Instruction2_Type7(SETP);
    gen_Instruction2_Type7(SETPE);
    gen_Instruction2_Type7(SETPO);
    gen_Instruction2_Type7(SETS);
    gen_Instruction2_Type7(SETZ);

    gen_Instruction2_Type8(BOUND);

    gen_Instruction2_Type9(MOVHPS);
    gen_Instruction2_Type9(MOVLPS);

    gen_Instruction2_Type10(ADDPS);
    gen_Instruction2_Type10(SUBPS);
    gen_Instruction2_Type10(MULPS);
    gen_Instruction2_Type10(DIVPS);
    gen_Instruction2_Type10(RCPPS);
    gen_Instruction2_Type10(SQRTPS);
    gen_Instruction2_Type10(MAXPS);
    gen_Instruction2_Type10(MINPS);
    gen_Instruction2_Type10(ANDPS);
    gen_Instruction2_Type10(ANDNPS);
    gen_Instruction2_Type10(ORPS);
    gen_Instruction2_Type10(XORPS);
    gen_Instruction2_Type10(UNPCKHPS);
    gen_Instruction2_Type10(UNPCKLPS);
    gen_Instruction2_Type10(ADDPD);
    gen_Instruction2_Type10(SUBPD);
    gen_Instruction2_Type10(MULPD);
    gen_Instruction2_Type10(DIVPD);
    gen_Instruction2_Type10(SQRTPD);
    gen_Instruction2_Type10(MAXPD);
    gen_Instruction2_Type10(MINPD);
    gen_Instruction2_Type10(ANDPD);
    gen_Instruction2_Type10(ANDNPD);
    gen_Instruction2_Type10(ORPD);
    gen_Instruction2_Type10(XORPD);
    gen_Instruction2_Type10(UNPCKHPD);
    gen_Instruction2_Type10(UNPCKLPD);
    gen_Instruction2_Type10(CVTPD2DQ);
    gen_Instruction2_Type10(CVTTPD2DQ);
    gen_Instruction2_Type10(CVTPD2PS);
    gen_Instruction2_Type10(CVTDQ2PS);
    gen_Instruction2_Type10(CVTPS2DQ);
    gen_Instruction2_Type10(CVTTPS2DQ);
    gen_Instruction2_Type10(PUNPCKHQDQ);
    gen_Instruction2_Type10(PUNPCKLQDQ);
    gen_Instruction2_Type10(ADDSUBPS);
    gen_Instruction2_Type10(ADDSUBPD);
    gen_Instruction2_Type10(HADDPS);
    gen_Instruction2_Type10(HSUBPS);
    gen_Instruction2_Type10(HADDPD);
    gen_Instruction2_Type10(HSUBPD);
    gen_Instruction2_Type10(MOVSHDUP);
    gen_Instruction2_Type10(MOVSLDUP);
    gen_Instruction2_Type10(PMULLD);
    gen_Instruction2_Type10(PMULDQ);
    gen_Instruction2_Type10(PMINUW);
    gen_Instruction2_Type10(PMINUD);
    gen_Instruction2_Type10(PMINSB);
    gen_Instruction2_Type10(PMINSD);
    gen_Instruction2_Type10(PMAXUW);
    gen_Instruction2_Type10(PMAXUD);
    gen_Instruction2_Type10(PMAXSB);
    gen_Instruction2_Type10(PMAXSD);
    gen_Instruction2_Type10(PCMPGTQ);
    gen_Instruction2_Type10(AESDEC);
    gen_Instruction2_Type10(AESDECLAST);
    gen_Instruction2_Type10(AESENC);
    gen_Instruction2_Type10(AESENCLAST);
    gen_Instruction2_Type10(AESIMC);
    gen_Instruction2_Type10(PHMINPOSUW);
    gen_Instruction2_Type10(PTEST);
    gen_Instruction2_Type10(PCMPEQQ);
    gen_Instruction2_Type10(PACKUSDW);

    gen_Instruction2_Type11(ADDSS);
    gen_Instruction2_Type11(SUBSS);
    gen_Instruction2_Type11(MULSS);
    gen_Instruction2_Type11(DIVSS);
    gen_Instruction2_Type11(RCPSS);
    gen_Instruction2_Type11(SQRTSS);
    gen_Instruction2_Type11(MAXSS);
    gen_Instruction2_Type11(MINSS);
    gen_Instruction2_Type11(COMISS);
    gen_Instruction2_Type11(UCOMISS);
    gen_Instruction2_Type11(CVTSS2SD);
    gen_Instruction2_Type11(PMOVSXBD);
    gen_Instruction2_Type11(PMOVSXWQ);
    gen_Instruction2_Type11(PMOVZXBD);
    gen_Instruction2_Type11(PMOVZXWQ);

    gen_Instruction2_Type12(CMPPS);
    gen_Instruction2_Type12(SHUFPS);
    gen_Instruction2_Type12(CMPPD);
    gen_Instruction2_Type12(SHUFPD);
    gen_Instruction2_Type12(PSHUFLW);
    gen_Instruction2_Type12(PSHUFHW);
    gen_Instruction2_Type12(PSHUFD);
    gen_Instruction2_Type12(DPPD);
    gen_Instruction2_Type12(DPPS);
    gen_Instruction2_Type12(BLENDPD);
    gen_Instruction2_Type12(BLENDPS);
    gen_Instruction2_Type12(PBLENDW);
    gen_Instruction2_Type12(ROUNDPS);
    gen_Instruction2_Type12(ROUNDPD);
    gen_Instruction2_Type12(MPSADBW);
    gen_Instruction2_Type12(PCMPESTRI);
    gen_Instruction2_Type12(PCMPESTRM);
    gen_Instruction2_Type12(PCMPISTRI);
    gen_Instruction2_Type12(PCMPISTRM);
    gen_Instruction2_Type12(AESKEYGENASSIST);
    gen_Instruction2_Type12(PCLMULQDQ);

    gen_Instruction2_Type13(CMPSS);
    gen_Instruction2_Type13(ROUNDSS);
    gen_Instruction2_Type13(INSERTPS);

    gen_Instruction2_Type14(ADDSD);
    gen_Instruction2_Type14(SUBSD);
    gen_Instruction2_Type14(MULSD);
    gen_Instruction2_Type14(DIVSD);
    gen_Instruction2_Type14(SQRTSD);
    gen_Instruction2_Type14(MAXSD);
    gen_Instruction2_Type14(MINSD);
    gen_Instruction2_Type14(COMISD);
    gen_Instruction2_Type14(UCOMISD);
    gen_Instruction2_Type14(CVTDQ2PD);
    gen_Instruction2_Type14(CVTPS2PD);
    gen_Instruction2_Type14(CVTSD2SS);
    gen_Instruction2_Type14(MOVDDUP);
    gen_Instruction2_Type14(PMOVSXBW);
    gen_Instruction2_Type14(PMOVSXWD);
    gen_Instruction2_Type14(PMOVSXDQ);
    gen_Instruction2_Type14(PMOVZXBW);
    gen_Instruction2_Type14(PMOVZXWD);
    gen_Instruction2_Type14(PMOVZXDQ);

    gen_Instruction2_Type15(CMPSD_SSE2);
    gen_Instruction2_Type15(ROUNDSD);

    gen_Instruction2_Type16(FIST);
    gen_Instruction2_Type16(FIADD);
    gen_Instruction2_Type16(FISUB);
    gen_Instruction2_Type16(FISUBR);
    gen_Instruction2_Type16(FIMUL);
    gen_Instruction2_Type16(FIDIV);
    gen_Instruction2_Type16(FIDIVR);
    gen_Instruction2_Type16(FICOM);
    gen_Instruction2_Type16(FICOMP);

    gen_Instruction2_Type17(CVTPI2PS);
    gen_Instruction2_Type17(CVTPI2PD);

    gen_Instruction2_Type18(CVTPS2PI);
    gen_Instruction2_Type18(CVTTPS2PI);

    gen_Instruction2_Type19(CVTPD2PI);
    gen_Instruction2_Type19(CVTTPD2PI);

    gen_Instruction2_Type20(FADDP);
    gen_Instruction2_Type20(FSUBP);
    gen_Instruction2_Type20(FSUBRP);
    gen_Instruction2_Type20(FMULP);
    gen_Instruction2_Type20(FDIVP);
    gen_Instruction2_Type20(FDIVRP);

    gen_Instruction2_Type21(PSHUFW);

    gen_Instruction2_Type22(MOVNTI);

    gen_Instruction2_Type23(PINSRB);

    gen_Instruction2_Type24(PINSRD);

    gen_Instruction2_Type27(PMOVSXBQ);
    gen_Instruction2_Type27(PMOVZXBQ);

    gen_Instruction2_Type28(VFMADD132SD);
    gen_Instruction2_Type28(VFMADD213SD);
    gen_Instruction2_Type28(VFMADD231SD);
    gen_Instruction2_Type28(VFMSUB132SD);
    gen_Instruction2_Type28(VFMSUB213SD);
    gen_Instruction2_Type28(VFMSUB231SD);
    gen_Instruction2_Type28(VFNMADD132SD);
    gen_Instruction2_Type28(VFNMADD213SD);
    gen_Instruction2_Type28(VFNMADD231SD);
    gen_Instruction2_Type28(VFNMSUB132SD);
    gen_Instruction2_Type28(VFNMSUB213SD);
    gen_Instruction2_Type28(VFNMSUB231SD);

    gen_Instruction2_Type29(VFMADD132SS);
    gen_Instruction2_Type29(VFMADD213SS);
    gen_Instruction2_Type29(VFMADD231SS);
    gen_Instruction2_Type29(VFMSUB132SS);
    gen_Instruction2_Type29(VFMSUB213SS);
    gen_Instruction2_Type29(VFMSUB231SS);
    gen_Instruction2_Type29(VFNMADD132SS);
    gen_Instruction2_Type29(VFNMADD213SS);
    gen_Instruction2_Type29(VFNMADD231SS);
    gen_Instruction2_Type29(VFNMSUB132SS);
    gen_Instruction2_Type29(VFNMSUB213SS);
    gen_Instruction2_Type29(VFNMSUB231SS);

    gen_Instruction2_Type30(VDPPD);

    gen_Instruction2_Type31(VLDDQU);
    gen_Instruction2_Type31(VMOVNTDQA);

    gen_Instruction2_Type32(VMOVNTPS);
    gen_Instruction2_Type32(VMOVNTDQ);

    gen_Instruction2_Type33(VBROADCASTSS);

    gen_Instruction2_Type34(VEXTRACTF128);

    gen_Instruction2_Type35(VINSERTF128);

    gen_Instruction2_Type36(VPERM2F128);

    gen_Instruction3_Type1(LDS);
    gen_Instruction3_Type1(LES);
    gen_Instruction3_Type1(LFS);
    gen_Instruction3_Type1(LGS);
    gen_Instruction3_Type1(LSS);
    gen_Instruction3_Type1(LEA);

    gen_Instruction3_Type2(RDRAND);
    gen_Instruction3_Type2(RDSEED);

    gen_Instruction3_Type3(MOVSS);

    gen_Instruction3_Type4(MOVSD_SSE2);

    gen_Instruction3_Type5(MOVAPS);
    gen_Instruction3_Type5(MOVUPS);
    gen_Instruction3_Type5(MOVAPD);
    gen_Instruction3_Type5(MOVUPD);
    gen_Instruction3_Type5(MOVDQA);
    gen_Instruction3_Type5(MOVDQU);

    gen_Instruction3_Type6(FILD);
    gen_Instruction3_Type6(FISTP);
    gen_Instruction3_Type6(FISTTP);

    gen_Instruction3_Type7(FST);

    gen_Instruction3_Type8(FADD);
    gen_Instruction3_Type8(FSUB);
    gen_Instruction3_Type8(FSUBR);
    gen_Instruction3_Type8(FMUL);
    gen_Instruction3_Type8(FDIV);
    gen_Instruction3_Type8(FDIVR);

    gen_Instruction3_Type9(PEXTRB);

    gen_Instruction3_Type10(EXTRACTPS);
    gen_Instruction3_Type10(PEXTRD);

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

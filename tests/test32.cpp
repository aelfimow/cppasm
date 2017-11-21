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

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

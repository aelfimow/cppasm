#include "cppasm.h"

static void gen_Instruction2_Type2(Instruction2_Type2 &instr)
{
    imm16 value { 65535 };
    instr();
    instr(value);
}

static void gen_Instruction2_Type3(Instruction2_Type3 &instr)
{
    instr(EAX);
    instr(RAX);
}

static void gen_Instruction2_Type4(Instruction2_Type4 &instr)
{
    instr(EAX, XMM0);
    instr(RAX, XMM0);
}

static void gen_Instruction2_Type5(Instruction2_Type5 &instr)
{
    instr();
    instr(ST(1));
}

static void gen_Instruction2_Type6(Instruction2_Type6 &instr)
{
    instr(AX);

    m16 addr { RAX };
    instr(addr);
}

static void gen_Instruction2_Type7(Instruction2_Type7 &instr)
{
    instr(AL);

    m8 addr { RAX };
    instr(addr);
}

static void gen_Instruction2_Type9(Instruction2_Type9 &instr)
{
    m64 addr { RAX };
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction2_Type10(Instruction2_Type10 &instr)
{
    m128 addr { RAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type11(Instruction2_Type11 &instr)
{
    m32 addr { RAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type12(Instruction2_Type12 &instr)
{
    m128 addr { RAX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type13(Instruction2_Type13 &instr)
{
    m32 addr { RAX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type14(Instruction2_Type14 &instr)
{
    m64 addr { RAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type15(Instruction2_Type15 &instr)
{
    m64 addr { RAX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type16(Instruction2_Type16 &instr)
{
    m16 addr1 { RAX };
    m32 addr2 { RBX };
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction2_Type17(Instruction2_Type17 &instr)
{
    m64 addr { RAX };
    instr(XMM0, MM0);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type18(Instruction2_Type18 &instr)
{
    m64 addr { RAX };
    instr(MM0, XMM0);
    instr(MM0, addr);
}

static void gen_Instruction2_Type19(Instruction2_Type19 &instr)
{
    m128 addr { RAX };
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
    m64 addr { RAX };
    imm8 mask { 255 };
    instr(MM0, MM1, mask);
    instr(MM0, addr, mask);
}

static void gen_Instruction2_Type22(Instruction2_Type22 &instr)
{
    m32 addr1 { RAX };
    m64 addr2 { RBX };
    instr(addr1, ECX);
    instr(addr2, RCX);
}

static void gen_Instruction2_Type23(Instruction2_Type23 &instr)
{
    m8 addr { RAX };
    imm8 mask { 255 };
    instr(XMM0, EAX, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type24(Instruction2_Type24 &instr)
{
    m32 addr { RBX };
    imm8 mask { 255 };
    instr(XMM0, EAX, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type25(Instruction2_Type25 &instr)
{
    m64 addr { RBX };
    imm8 mask { 255 };
    instr(XMM0, RAX, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction2_Type26(Instruction2_Type26 &instr)
{
    m64 addr { RBX };
    imm8 mask { 255 };
    instr(RAX, XMM1, mask);
    instr(addr, XMM1, mask);
}

static void gen_Instruction2_Type27(Instruction2_Type27 &instr)
{
    m16 addr { RAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
}

static void gen_Instruction2_Type28(Instruction2_Type28 &instr)
{
    m64 addr { RAX };
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, XMM1, addr);
}

static void gen_Instruction2_Type29(Instruction2_Type29 &instr)
{
    m32 addr { RAX };
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, XMM1, addr);
}

static void gen_Instruction2_Type30(Instruction2_Type30 &instr)
{
    imm8 mask { 255 };
    m128 addr { RAX };
    instr(XMM0, XMM1, XMM2, mask);
    instr(XMM0, XMM1, addr, mask);
}

static void gen_Instruction2_Type31(Instruction2_Type31 &instr)
{
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    instr(XMM0, addr1);
    instr(YMM0, addr2);
}

static void gen_Instruction2_Type32(Instruction2_Type32 &instr)
{
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    instr(addr1, XMM0);
    instr(addr2, YMM0);
}

static void gen_Instruction2_Type33(Instruction2_Type33 &instr)
{
    imm8 mask { 255 };
    m256 addr { RBX };
    instr(YMM0, ZMM0, mask);
    instr(YMM0.k1, ZMM0, mask);
    instr(YMM0.k1.z, ZMM0, mask);
    instr(addr, ZMM0, mask);
}

static void gen_Instruction2_Type34(Instruction2_Type34 &instr)
{
    imm8 mask { 255 };
    m128 addr { RAX };
    instr(XMM0, YMM0, mask);
    instr(addr, YMM0, mask);
}

static void gen_Instruction2_Type35(Instruction2_Type35 &instr)
{
    imm8 mask { 255 };
    m128 addr { RAX };
    instr(YMM0, YMM1, XMM0, mask);
    instr(YMM0, YMM1, addr, mask);
}

static void gen_Instruction2_Type36(Instruction2_Type36 &instr)
{
    imm8 mask { 255 };
    m256 addr { RAX };
    instr(YMM0, YMM1, YMM2, mask);
    instr(YMM0, YMM1, addr, mask);
}

static void gen_Instruction2_Type37(Instruction2_Type37 &instr)
{
    m32 addr { RAX };
    imm8 mask { 255 };
    instr(EAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

static void gen_Instruction2_Type38(Instruction2_Type38 &instr)
{
    m128 addr { RDX };
    instr(XMM2, XMM1, XMM0);
    instr(XMM1, addr, XMM0);
}

static void gen_Instruction2_Type39(Instruction2_Type39 &instr)
{
    m128 addr { RBX };
    instr(RAX, addr);
}

static void gen_Instruction2_Type40(Instruction2_Type40 &instr)
{
    m32 addr1 { EBX };
    m64 addr2 { RBX };
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction2_Type41(Instruction2_Type41 &instr)
{
    m128 addr { RBX };
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
}

void gen_Instruction2()
{
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
    gen_Instruction2_Type10(RSQRTPS);

    gen_Instruction2_Type10(SHA1MSG1);
    gen_Instruction2_Type10(SHA1MSG2);
    gen_Instruction2_Type10(SHA1NEXTE);
    gen_Instruction2_Type10(SHA256MSG1);
    gen_Instruction2_Type10(SHA256MSG2);

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
    gen_Instruction2_Type11(RSQRTSS);

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

    gen_Instruction2_Type25(PINSRQ);

    gen_Instruction2_Type26(PEXTRQ);

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
    gen_Instruction2_Type29(VRSQRTSS);

    gen_Instruction2_Type30(VDPPD);

    gen_Instruction2_Type31(VLDDQU);
    gen_Instruction2_Type31(VMOVNTDQA);

    gen_Instruction2_Type32(VMOVNTPS);
    gen_Instruction2_Type32(VMOVNTDQ);

    gen_Instruction2_Type33(VEXTRACTF32X8);
    gen_Instruction2_Type33(VEXTRACTF64X4);
    gen_Instruction2_Type33(VEXTRACTI32X8);
    gen_Instruction2_Type33(VEXTRACTI64X4);

    gen_Instruction2_Type34(VEXTRACTF128);
    gen_Instruction2_Type34(VEXTRACTI128);

    gen_Instruction2_Type35(VINSERTF128);
    gen_Instruction2_Type35(VINSERTI128);

    gen_Instruction2_Type36(VPERM2F128);

    gen_Instruction2_Type37(PEXTRD);

    gen_Instruction2_Type38(SHA256RNDS2);

    gen_Instruction2_Type39(INVEPT);
    gen_Instruction2_Type39(INVVPID);

    gen_Instruction2_Type40(VMCLEAR);
    gen_Instruction2_Type40(VMPTRLD);
    gen_Instruction2_Type40(VMPTRST);

    gen_Instruction2_Type41(VBROADCASTF32X4);
    gen_Instruction2_Type41(VBROADCASTF64X2);
    gen_Instruction2_Type41(VBROADCASTI32X4);
    gen_Instruction2_Type41(VBROADCASTI64X2);
}

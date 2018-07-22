#include "cppasm.h"

static void gen_Instruction4_Type1(Instruction4_Type1 &instr)
{
    m64 addr1 { EAX };
    m128 addr2 { EBX };
    instr(MM0, MM1);
    instr(MM0, addr1);
    instr(XMM0, XMM1);
    instr(XMM0, addr2);
}

static void gen_Instruction4_Type2(Instruction4_Type2 &instr)
{
    m32fp addr1 { EAX };
    m64fp addr2 { EBX };
    m80fp addr3 { ECX };
    instr(addr1);
    instr(addr2);
    instr(addr3);
    instr(ST(0));
}

static void gen_Instruction4_Type3(Instruction4_Type3 &instr)
{
    m64 addr { EBX };
    instr(YMM0, addr);
    instr(YMM0, XMM0);
    instr(ZMM0, addr);
    instr(ZMM0, XMM0);
    instr(YMM0.k1, addr);
    instr(YMM0.k1, XMM0);
    instr(ZMM0.k1, addr);
    instr(ZMM0.k1, XMM0);
    instr(YMM0.k1.z, addr);
    instr(YMM0.k1.z, XMM0);
    instr(ZMM0.k1.z, addr);
    instr(ZMM0.k1.z, XMM0);
}

static void gen_Instruction4_Type4(Instruction4_Type4 &instr)
{
    m64 addr1 { EAX };
    m128 addr2 { EBX };
    imm8 mask { 255 };
    instr(MM0, MM1, mask);
    instr(MM0, addr1, mask);
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr2, mask);
}

static void gen_Instruction4_Type5(Instruction4_Type5 &instr)
{
    m32 addr { EAX };
    instr(XMM0, EAX);
    instr(XMM0, addr);
    instr(EAX, XMM0);
    instr(addr, XMM0);
}

static void gen_Instruction4_Type7(Instruction4_Type7 &instr)
{
    m32 addr { EAX };
    instr(EAX, EBX);
    instr(EAX, addr);
}

static void gen_Instruction4_Type8(Instruction4_Type8 &instr)
{
    m32 addr { EAX };
    instr(XMM0, EAX);
    instr(XMM0, addr);
}

static void gen_Instruction4_Type9(Instruction4_Type9 &instr)
{
    m32 addr { EAX };
    instr(EAX, XMM0);
    instr(EAX, addr);
}

static void gen_Instruction4_Type10(Instruction4_Type10 &instr)
{
    m32fp addr1 { EAX };
    m64fp addr2 { EBX };
    instr();
    instr(ST(1));
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction4_Type11(Instruction4_Type11 &instr)
{
    m16 addr { EAX };
    imm8 mask { 255 };
    instr(MM0, EAX, mask);
    instr(MM0, addr, mask);
    instr(XMM0, EAX, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction4_Type12(Instruction4_Type12 &instr)
{
    instr(EAX, MM0);
    instr(EAX, XMM0);
}

static void gen_Instruction4_Type13(Instruction4_Type13 &instr)
{
    m64 addr { EAX };
    instr(EAX, XMM0);
    instr(EAX, addr);
}

static void gen_Instruction4_Type14(Instruction4_Type14 &instr)
{
    m128 addr { EAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, addr, XMM1);
}

static void gen_Instruction4_Type15(Instruction4_Type15 &instr)
{
    m64 addr1 { EAX };
    m128 addr2 { EBX };
    instr(XMM0, XMM1);
    instr(XMM0, addr1);
    instr(YMM0, XMM0);
    instr(YMM0, addr2);
}

static void gen_Instruction4_Type16(Instruction4_Type16 &instr)
{
    m64 addr1 { EAX };
    m128 addr2 { EBX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, mask);
    instr(addr1, XMM0, mask);
    instr(XMM0, YMM0, mask);
    instr(addr2, YMM0, mask);
}

static void gen_Instruction4_Type17(Instruction4_Type17 &instr)
{
    m128 addr1 { EAX };
    m256 addr2 { EBX };
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, XMM1, addr1);
    instr(YMM0, YMM1, YMM2);
    instr(YMM0, YMM1, addr2);
}

static void gen_Instruction4_Type18(Instruction4_Type18 &instr)
{
    m128 addr1 { EAX };
    m256 addr2 { EBX };
    instr(XMM0, XMM1);
    instr(XMM0, addr1);
    instr(YMM0, YMM1);
    instr(YMM0, addr2);
}

static void gen_Instruction4_Type19(Instruction4_Type19 &instr)
{
    instr(XMM0, XMM1);
    //instr(XMM0, addr1);
    instr(XMM0, YMM1);
    //instr(XMM0, addr2);
}

static void gen_Instruction4_Type20(Instruction4_Type20 &instr)
{
    imm8 mask { 255 };
    m128 addr1 { EAX };
    m256 addr2 { EBX };
    instr(XMM0, XMM1, XMM2, mask);
    instr(XMM0, XMM1, addr1, mask);
    instr(YMM0, YMM1, YMM2, mask);
    instr(YMM0, YMM1, addr2, mask);
}

static void gen_Instruction4_Type21(Instruction4_Type21 &instr)
{
    imm8 mask { 255 };
    m128 addr1 { EAX };
    m256 addr2 { EBX };
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr1, mask);
    instr(YMM0, YMM1, mask);
    instr(YMM0, addr2, mask);
}

static void gen_Instruction4_Type22(Instruction4_Type22 &instr)
{
    instr(EAX, XMM0);
    instr(EAX, YMM0);
}

static void gen_Instruction4_Type23(Instruction4_Type23 &instr)
{
    m128 addr { EAX };
    instr(XMM0, XMM1, XMM2, XMM3);
    instr(XMM0, XMM1, addr, XMM3);
    instr(YMM0, YMM1, YMM2, YMM3);
    instr(YMM0, YMM1, addr, YMM3);
}

static void gen_Instruction4_Type24(Instruction4_Type24 &instr)
{
    m128 addr1 { EAX };
    m256 addr2 { EBX };
    instr(XMM0, XMM1, addr1);
    instr(YMM0, YMM1, addr2);
    instr(addr1, XMM0, XMM1);
    instr(addr2, YMM0, YMM1);
}

static void gen_Instruction4_Type25(Instruction4_Type25 &instr)
{
    m32 addr { EAX };
    instr(XMM0, XMM1, EAX);
    instr(XMM0, XMM1, addr);
}

static void gen_Instruction4_Type26(Instruction4_Type26 &instr)
{
    m32 addr { EDX };
    instr(EAX, EBX);
    instr(addr, EBX);
}

static void gen_Instruction4_Type27(Instruction4_Type27 &instr)
{
    m32 addr { EDX };
    instr(EAX, EBX);
    instr(EBX, addr);
}

void gen_Instruction4()
{
    gen_Instruction4_Type1(PACKSSWB);
    gen_Instruction4_Type1(PACKUSWB);
    gen_Instruction4_Type1(PACKSSDW);
    gen_Instruction4_Type1(PUNPCKHBW);
    gen_Instruction4_Type1(PUNPCKHWD);
    gen_Instruction4_Type1(PUNPCKHDQ);
    gen_Instruction4_Type1(PUNPCKLBW);
    gen_Instruction4_Type1(PUNPCKLWD);
    gen_Instruction4_Type1(PUNPCKLDQ);
    gen_Instruction4_Type1(PADDB);
    gen_Instruction4_Type1(PADDW);
    gen_Instruction4_Type1(PADDD);
    gen_Instruction4_Type1(PADDSB);
    gen_Instruction4_Type1(PADDSW);
    gen_Instruction4_Type1(PADDUSB);
    gen_Instruction4_Type1(PADDUSW);
    gen_Instruction4_Type1(PSUBB);
    gen_Instruction4_Type1(PSUBW);
    gen_Instruction4_Type1(PSUBD);
    gen_Instruction4_Type1(PSUBSB);
    gen_Instruction4_Type1(PSUBSW);
    gen_Instruction4_Type1(PSUBUSB);
    gen_Instruction4_Type1(PSUBUSW);
    gen_Instruction4_Type1(PMULHW);
    gen_Instruction4_Type1(PMULLW);
    gen_Instruction4_Type1(PMADDWD);
    gen_Instruction4_Type1(PCMPEQB);
    gen_Instruction4_Type1(PCMPEQW);
    gen_Instruction4_Type1(PCMPEQD);
    gen_Instruction4_Type1(PCMPGTB);
    gen_Instruction4_Type1(PCMPGTW);
    gen_Instruction4_Type1(PCMPGTD);
    gen_Instruction4_Type1(PAND);
    gen_Instruction4_Type1(PANDN);
    gen_Instruction4_Type1(POR);
    gen_Instruction4_Type1(PXOR);
    gen_Instruction4_Type1(PAVGB);
    gen_Instruction4_Type1(PAVGW);
    gen_Instruction4_Type1(PMAXUB);
    gen_Instruction4_Type1(PMAXSW);
    gen_Instruction4_Type1(PMINUB);
    gen_Instruction4_Type1(PMINSW);
    gen_Instruction4_Type1(PMULUDQ);
    gen_Instruction4_Type1(PADDQ);
    gen_Instruction4_Type1(PSUBQ);
    gen_Instruction4_Type1(PHADDW);
    gen_Instruction4_Type1(PHADDSW);
    gen_Instruction4_Type1(PHADDD);
    gen_Instruction4_Type1(PHSUBW);
    gen_Instruction4_Type1(PHSUBSW);
    gen_Instruction4_Type1(PHSUBD);
    gen_Instruction4_Type1(PABSB);
    gen_Instruction4_Type1(PABSW);
    gen_Instruction4_Type1(PABSD);
    gen_Instruction4_Type1(PMADDUBSW);
    gen_Instruction4_Type1(PMULHRSW);
    gen_Instruction4_Type1(PSHUFB);
    gen_Instruction4_Type1(PSIGNB);
    gen_Instruction4_Type1(PSIGNW);
    gen_Instruction4_Type1(PSIGND);
    gen_Instruction4_Type1(PMULHUW);
    gen_Instruction4_Type1(PSADBW);

    gen_Instruction4_Type2(FLD);
    gen_Instruction4_Type2(FSTP);

    gen_Instruction4_Type3(VBROADCASTSD);
    gen_Instruction4_Type3(VBROADCASTF32X2);

    gen_Instruction4_Type4(PALIGNR);

    gen_Instruction4_Type5(VMOVD);

    gen_Instruction4_Type7(ADCX);
    gen_Instruction4_Type7(ADOX);

    gen_Instruction4_Type8(CVTSI2SS);
    gen_Instruction4_Type8(CVTSI2SD);

    gen_Instruction4_Type9(CVTSS2SI);
    gen_Instruction4_Type9(CVTTSS2SI);
    gen_Instruction4_Type9(VCVTTSS2SI);
    gen_Instruction4_Type9(VCVTSS2SI);

    gen_Instruction4_Type10(FCOM);
    gen_Instruction4_Type10(FCOMP);

    gen_Instruction4_Type11(PINSRW);

    gen_Instruction4_Type12(PMOVMSKB);

    gen_Instruction4_Type13(CVTSD2SI);
    gen_Instruction4_Type13(CVTTSD2SI);
    gen_Instruction4_Type13(VCVTSD2SI);
    gen_Instruction4_Type13(VCVTTSD2SI);

    gen_Instruction4_Type14(BLENDVPD);
    gen_Instruction4_Type14(BLENDVPS);
    gen_Instruction4_Type14(PBLENDVB);

    gen_Instruction4_Type15(VCVTPH2PS);
    gen_Instruction4_Type15(VCVTPS2PD);
    gen_Instruction4_Type15(VCVTDQ2PD);

    gen_Instruction4_Type16(VCVTPS2PH);

    gen_Instruction4_Type17(VFMADD132PD);
    gen_Instruction4_Type17(VFMADD213PD);
    gen_Instruction4_Type17(VFMADD231PD);
    gen_Instruction4_Type17(VFMADD132PS);
    gen_Instruction4_Type17(VFMADD213PS);
    gen_Instruction4_Type17(VFMADD231PS);
    gen_Instruction4_Type17(VFMADDSUB132PD);
    gen_Instruction4_Type17(VFMADDSUB213PD);
    gen_Instruction4_Type17(VFMADDSUB231PD);
    gen_Instruction4_Type17(VFMADDSUB132PS);
    gen_Instruction4_Type17(VFMADDSUB213PS);
    gen_Instruction4_Type17(VFMADDSUB231PS);
    gen_Instruction4_Type17(VFMSUBADD132PD);
    gen_Instruction4_Type17(VFMSUBADD213PD);
    gen_Instruction4_Type17(VFMSUBADD231PD);
    gen_Instruction4_Type17(VFMSUBADD132PS);
    gen_Instruction4_Type17(VFMSUBADD213PS);
    gen_Instruction4_Type17(VFMSUBADD231PS);
    gen_Instruction4_Type17(VFMSUB132PD);
    gen_Instruction4_Type17(VFMSUB213PD);
    gen_Instruction4_Type17(VFMSUB231PD);
    gen_Instruction4_Type17(VFMSUB132PS);
    gen_Instruction4_Type17(VFMSUB213PS);
    gen_Instruction4_Type17(VFMSUB231PS);
    gen_Instruction4_Type17(VFNMADD132PD);
    gen_Instruction4_Type17(VFNMADD213PD);
    gen_Instruction4_Type17(VFNMADD231PD);
    gen_Instruction4_Type17(VFNMADD132PS);
    gen_Instruction4_Type17(VFNMADD213PS);
    gen_Instruction4_Type17(VFNMADD231PS);
    gen_Instruction4_Type17(VFNMSUB132PD);
    gen_Instruction4_Type17(VFNMSUB213PD);
    gen_Instruction4_Type17(VFNMSUB231PD);
    gen_Instruction4_Type17(VFNMSUB132PS);
    gen_Instruction4_Type17(VFNMSUB213PS);
    gen_Instruction4_Type17(VFNMSUB231PS);
    gen_Instruction4_Type17(VADDPD);
    gen_Instruction4_Type17(VADDPS);
    gen_Instruction4_Type17(VSUBPD);
    gen_Instruction4_Type17(VSUBPS);
    gen_Instruction4_Type17(VMULPD);
    gen_Instruction4_Type17(VMULPS);
    gen_Instruction4_Type17(VDIVPD);
    gen_Instruction4_Type17(VDIVPS);
    gen_Instruction4_Type17(VMINPS);
    gen_Instruction4_Type17(VMINPD);
    gen_Instruction4_Type17(VMAXPS);
    gen_Instruction4_Type17(VMAXPD);
    gen_Instruction4_Type17(VHADDPS);
    gen_Instruction4_Type17(VHADDPD);
    gen_Instruction4_Type17(VHSUBPS);
    gen_Instruction4_Type17(VHSUBPD);
    gen_Instruction4_Type17(VADDSUBPS);
    gen_Instruction4_Type17(VADDSUBPD);
    gen_Instruction4_Type17(VUNPCKHPD);
    gen_Instruction4_Type17(VUNPCKLPD);
    gen_Instruction4_Type17(VUNPCKHPS);
    gen_Instruction4_Type17(VUNPCKLPS);
    gen_Instruction4_Type17(VXORPS);
    gen_Instruction4_Type17(VXORPD);
    gen_Instruction4_Type17(VORPS);
    gen_Instruction4_Type17(VORPD);
    gen_Instruction4_Type17(VANDPS);
    gen_Instruction4_Type17(VANDPD);
    gen_Instruction4_Type17(VANDNPS);
    gen_Instruction4_Type17(VANDNPD);

    gen_Instruction4_Type18(VSQRTPD);
    gen_Instruction4_Type18(VSQRTPS);
    gen_Instruction4_Type18(VRSQRTPS);
    gen_Instruction4_Type18(VRCPPS);
    gen_Instruction4_Type18(VCVTPS2DQ);
    gen_Instruction4_Type18(VCVTDQ2PS);
    gen_Instruction4_Type18(VCVTTPS2DQ);
    gen_Instruction4_Type18(VPTEST);
    gen_Instruction4_Type18(VTESTPS);
    gen_Instruction4_Type18(VTESTPD);
    gen_Instruction4_Type18(VMOVSHDUP);
    gen_Instruction4_Type18(VMOVSLDUP);
    gen_Instruction4_Type18(VMOVDDUP);

    gen_Instruction4_Type19(VCVTPD2PS);
    gen_Instruction4_Type19(VCVTTPD2DQ);
    gen_Instruction4_Type19(VCVTPD2DQ);

    gen_Instruction4_Type20(VCMPPS);
    gen_Instruction4_Type20(VCMPPD);
    gen_Instruction4_Type20(VDPPS);
    gen_Instruction4_Type20(VBLENDPS);
    gen_Instruction4_Type20(VBLENDPD);
    gen_Instruction4_Type20(VSHUFPS);
    gen_Instruction4_Type20(VSHUFPD);

    gen_Instruction4_Type21(VROUNDPS);
    gen_Instruction4_Type21(VROUNDPD);

    gen_Instruction4_Type22(VMOVMSKPS);
    gen_Instruction4_Type22(VMOVMSKPD);

    gen_Instruction4_Type23(VBLENDVPD);
    gen_Instruction4_Type23(VBLENDVPS);

    gen_Instruction4_Type24(VMASKMOVPS);
    gen_Instruction4_Type24(VMASKMOVPD);
    gen_Instruction4_Type24(VPMASKMOVD);
    gen_Instruction4_Type24(VPMASKMOVQ);

    gen_Instruction4_Type25(VCVTSI2SS);
    gen_Instruction4_Type25(VCVTSI2SD);

    gen_Instruction4_Type26(VMREAD);

    gen_Instruction4_Type27(VMWRITE);
}

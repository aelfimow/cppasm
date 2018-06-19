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

static void gen_Instruction1_Type11_1(Instruction1_Type11 &instr)
{
    instr();
    STOSB();
}

static void gen_Instruction1_Type11_2(Instruction1_Type11 &instr)
{
    instr();
    m32 addr { EBX };
    XCHG(EAX, addr);
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
    m256 addr { EBX };
    instr(ZMM0, addr);
    instr(ZMM0.k1, addr);
    instr(ZMM0.k1.z, addr);
}

static void gen_Instruction1_Type26(Instruction1_Type26 &instr)
{
    m128 addr { EAX };

    instr(YMM0, addr);
}

static void gen_Instruction1_Type27(Instruction1_Type27 &instr)
{
    instr(k1, k2, k3);
}

static void gen_Instruction1_Type28(Instruction1_Type28 &instr)
{
    instr(k1, k2);
}

static void gen_Instruction1_Type29(Instruction1_Type29 &instr)
{
    imm8 value { 0 };
    instr(k1, k2, value);
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

static void gen_Instruction2_Type37(Instruction2_Type37 &instr)
{
    m32 addr { EAX };
    imm8 mask { 255 };
    instr(EAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

static void gen_Instruction2_Type38(Instruction2_Type38 &instr)
{
    m128 addr { EDX };
    instr(XMM2, XMM1, XMM0);
    instr(XMM1, addr, XMM0);
}

static void gen_Instruction2_Type39(Instruction2_Type39 &instr)
{
    m128 addr { EBX };
    instr(EAX, addr);
}

static void gen_Instruction2_Type40(Instruction2_Type40 &instr)
{
    m32 addr { EBX };
    instr(addr);
}

static void gen_Instruction2_Type41(Instruction2_Type41 &instr)
{
    m128 addr { EBX };
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
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

static void gen_Instruction5_Type1(Instruction5_Type1 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    instr();
    instr(AX);
    instr(addr1);
    instr(EAX);
    instr(addr2);
}

static void gen_Instruction5_Type2(Instruction5_Type2 &instr)
{
    imm8 mask { 255 };
    m16 addr { EAX };
    instr(EAX, MM0, mask);
    instr(EAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

static void gen_Instruction5_Type3(Instruction5_Type3 &instr)
{
    m8 addr { EDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction5_Type4(Instruction5_Type4 &instr)
{
    m16 addr { EDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction5_Type5(Instruction5_Type5 &instr)
{
    m32 addr { EDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction6_Type1(Instruction6_Type1 &instr)
{
    m64 addr1 { EAX };
    m128 addr2 { EBX };
    imm8 mask { 255 };
    instr(MM0, MM1);
    instr(MM0, addr1);
    instr(XMM0, XMM1);
    instr(XMM0, addr2);
    instr(MM0, mask);
    instr(XMM0, mask);
}

static void gen_Instruction6_Type2(Instruction6_Type2 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    instr(AX, BX);
    instr(AX, addr1);
    instr(EAX, EBX);
    instr(EAX, addr2);
}

static void gen_Instruction6_Type3(Instruction6_Type3 &instr)
{
    imm8 addr { 0 };
    instr(AL, addr);
    instr(AX, addr);
    instr(EAX, addr);
    instr(AL, DX);
    instr(AX, DX);
    instr(EAX, DX);
}

static void gen_Instruction6_Type4(Instruction6_Type4 &instr)
{
    imm8 addr { 0 };
    instr(addr, AL);
    instr(addr, AX);
    instr(addr, EAX);
    instr(DX, AL);
    instr(DX, AX);
    instr(DX, EAX);
}

static void gen_Instruction6_Type5(Instruction6_Type5 &instr)
{
    m128 addr1 { EAX };
    m256 addr2 { EBX };
    instr(XMM0, XMM1);
    instr(XMM0, addr1);
    instr(addr1, XMM0);
    instr(YMM0, YMM2);
    instr(YMM0, addr2);
    instr(addr2, YMM0);
}

static void gen_Instruction6_Type6(Instruction6_Type6 &instr)
{
    m32 addr { EBX };
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0, XMM1);
    instr(YMM0, XMM1);
    instr(ZMM0, XMM1);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1, XMM1);
    instr(YMM0.k1, XMM1);
    instr(ZMM0.k1, XMM1);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
    instr(XMM0.k1.z, XMM1);
    instr(YMM0.k1.z, XMM1);
    instr(ZMM0.k1.z, XMM1);
}

static void gen_Instruction7_Type1(Instruction7_Type1 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    std::string loc { "gen_Instruction7_Type1_label" };
    instr(loc);
    instr(AX);
    instr(EAX);
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction7_Type2(Instruction7_Type2 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    instr(AX);
    instr(addr1);
    instr(EBX);
    instr(addr2);
    instr(DS);
}

static void gen_Instruction7_Type3(Instruction7_Type3 &instr)
{
    m16 addr1 { EAX };
    m32 addr2 { EBX };
    std::string loc { "gen_Instruction7_Type3_label" };
    instr(loc);
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction8_Type1(Instruction8_Type1 &instr)
{
    m32 addr { EDX };
    instr(MM0, EAX);
    instr(MM0, addr);
    instr(EAX, MM0);
    instr(addr, MM0);
    instr(XMM0, EAX);
    instr(XMM0, addr);
    instr(EAX, XMM0);
    instr(addr, XMM0);
}

static void gen_Instruction8_Type2(Instruction8_Type2 &instr)
{
    m64 addr { EDX };
    instr(MM0, addr);
    instr(addr, MM0);
    instr(XMM0, addr);
    instr(addr, XMM0);
}

static void gen_Instruction8_Type3(Instruction8_Type3 &instr)
{
    instr(AL);
    instr(AX);
    instr(EAX);

    m8  addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(addr1);
    instr(addr2);
    instr(addr3);
}

static void gen_Instruction8_Type4(Instruction8_Type4 &instr)
{
    m8  addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, BL);
    instr(addr1, CL);
    instr(AX, BX);
    instr(addr2, CX);
    instr(EAX, EBX);
    instr(addr3, ECX);
}

static void gen_Instruction8_Type5(Instruction8_Type5 &instr)
{
    m128 addr1 { EDX };
    m256 addr2 { EDX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, XMM1, addr1);
    instr(YMM0, YMM1, YMM2);
    instr(YMM0, YMM1, addr2);
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr1, mask);
    instr(YMM0, YMM1, mask);
    instr(YMM0, addr2, mask);
}

static void gen_Instruction10_Type1(Instruction10_Type1 &instr)
{
    instr(AX);
    instr(EAX);
    m16 addr1 { EDX };
    m32 addr2 { EDX };
    instr(addr1);
    instr(addr2);
    imm8 v1 { 0xAA };
    imm16 v2 { 0xAABB };
    imm32 v3 { 0xAABBCCDD };
    instr(v1);
    instr(v2);
    instr(v3);
    instr(GS);
}

static void gen_Instruction10_Type2(Instruction10_Type2 &instr)
{
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(ECX, AL);
    instr(ECX, addr1);
    instr(ECX, AX);
    instr(ECX, addr2);
    instr(ECX, EAX);
    instr(ECX, addr3);
}

static void gen_Instruction12_Type1(Instruction12_Type1 &instr)
{
    m16 addr1 { EDX };
    m32 addr2 { EDX };
    imm8 value { 1 };
    instr(AX, BX);
    instr(addr1, AX);
    instr(EAX, EBX);
    instr(addr2, EAX);
    instr(AX, value);
    instr(EAX, value);
    instr(addr1, value);
    instr(addr2, value);
}

static void gen_Instruction12_Type2(Instruction12_Type2 &instr)
{
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, BL);
    instr(addr1, CL);
    instr(CL, addr1);
    instr(AX, BX);
    instr(addr2, CX);
    instr(CX, addr2);
    instr(EAX, EBX);
    instr(addr3, ECX);
    instr(ECX, addr3);
}

static void gen_Instruction12_Type3(Instruction12_Type3 &instr)
{
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    instr(AX, BL);
    instr(AX, addr1);
    instr(EAX, BL);
    instr(EAX, addr1);
    instr(EAX, AX);
    instr(EAX, addr2);
}

static void gen_Instruction12_Type4(Instruction12_Type4 &instr)
{
    imm8 value { 1 };
    m16 addr1 { EDX };
    m32 addr2 { EDX };
    instr(AX, BX, value);
    instr(addr1, BX, value);
    instr(AX, BX, CL);
    instr(addr1, BX, CL);
    instr(EAX, EBX, value);
    instr(addr2, EBX, value);
    instr(EAX, EBX, CL);
    instr(addr2, EBX, CL);
}

static void gen_Instruction16_Type1(Instruction16_Type1 &instr)
{
    imm8 value1 { 0xAA };
    imm16 value2 { 0xAABB };
    imm32 value3 { 0xAABBCCDD };
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, value1);
    instr(addr1, value1);
    instr(AX, value2);
    instr(addr2, value2);
    instr(EAX, value3);
    instr(addr3, value3);
    instr(AL, AH);
    instr(addr1, AL);
    instr(AX, BX);
    instr(addr2, AX);
    instr(EAX, EBX);
    instr(addr3, EAX);
}

static void gen_Instruction16_Type2(Instruction16_Type2 &instr)
{
    imm8 value { 1 };
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, value);
    instr(addr1, value);
    instr(AL, CL);
    instr(addr1, CL);
    instr(AX, value);
    instr(addr2, value);
    instr(AX, CL);
    instr(addr2, CL);
    instr(EAX, value);
    instr(addr3, value);
    instr(EAX, CL);
    instr(addr3, CL);
}

static void gen_Instruction26_Type1(Instruction26_Type1 &instr)
{
    imm8 value1 { 1 };
    imm16 value2 { 2 };
    imm32 value3 { 3 };
    m8 addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };
    instr(AL, value1);
    instr(addr1, value1);
    instr(AX, value2);
    instr(addr2, value2);
    instr(EAX, value3);
    instr(addr3, value3);
    instr(AX, value1);
    instr(addr2, value1);
    instr(EAX, value1);
    instr(addr3, value1);
    instr(AL, BL);
    instr(addr1, BL);
    instr(AX, BX);
    instr(addr2, BX);
    instr(EAX, EBX);
    instr(addr3, EBX);
    instr(AL, addr1);
    instr(AX, addr2);
    instr(EAX, addr3);
}

static void gen_Instruction36_Type1(Instruction36_Type1 &instr)
{
    imm8 value1 { 0x42 };
    imm16 value2 { 0x4242 };
    imm32 value3 { 0x42424242 };
    m8  addr1 { EDX };
    m16 addr2 { EDX };
    m32 addr3 { EDX };

    instr(AL, CL);
    instr(addr1, CL);
    instr(AX, CX);
    instr(addr2, CX);
    instr(EAX, ECX);
    instr(addr3, ECX);
    instr(AL, addr1);
    instr(AX, addr2);
    instr(EAX, addr3);
    instr(AX, DS);
    instr(addr2, DS);
    instr(DS, CX);
    instr(DS, addr2);
    instr(AL, value1);
    instr(AX, value2);
    instr(EAX, value3);
    instr(addr1, value1);
    instr(addr2, value2);
    instr(addr3, value3);
    instr(EAX, CR0);
    instr(CR0, ECX);
    instr(EAX, DR0);
    instr(DR0, ECX);
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
    gen_Instruction1_Type1(FWAIT);
    gen_Instruction1_Type1(WAIT);
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

    gen_Instruction1_Type1(XEND);
    gen_Instruction1_Type1(XTEST);

    gen_Instruction1_Type1(VMCALL);
    gen_Instruction1_Type1(VMFUNC);
    gen_Instruction1_Type1(VMLAUNCH);
    gen_Instruction1_Type1(VMRESUME);
    gen_Instruction1_Type1(VMXOFF);

    gen_Instruction1_Type1(GETSEC);

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
    gen_Instruction1_Type4(XBEGIN, L);

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
    gen_Instruction1_Type10(XABORT);

    gen_Instruction1_Type11_1(REP);
    gen_Instruction1_Type11_1(REPE);
    gen_Instruction1_Type11_1(REPZ);
    gen_Instruction1_Type11_1(REPNE);
    gen_Instruction1_Type11_1(REPNZ);

    gen_Instruction1_Type11_2(XRELEASE);
    gen_Instruction1_Type11_2(XACQUIRE);

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

    gen_Instruction1_Type25(VBROADCASTF32X8);
    gen_Instruction1_Type25(VBROADCASTF64X4);

    gen_Instruction1_Type26(VBROADCASTF128);

    gen_Instruction1_Type27(KADDB);
    gen_Instruction1_Type27(KADDW);
    gen_Instruction1_Type27(KADDD);
    gen_Instruction1_Type27(KADDQ);
    gen_Instruction1_Type27(KANDB);
    gen_Instruction1_Type27(KANDW);
    gen_Instruction1_Type27(KANDD);
    gen_Instruction1_Type27(KANDQ);
    gen_Instruction1_Type27(KANDNB);
    gen_Instruction1_Type27(KANDNW);
    gen_Instruction1_Type27(KANDND);
    gen_Instruction1_Type27(KANDNQ);
    gen_Instruction1_Type27(KORB);
    gen_Instruction1_Type27(KORW);
    gen_Instruction1_Type27(KORD);
    gen_Instruction1_Type27(KORQ);
    gen_Instruction1_Type27(KUNPCKBW);
    gen_Instruction1_Type27(KUNPCKWD);
    gen_Instruction1_Type27(KUNPCKDQ);
    gen_Instruction1_Type27(KXNORB);
    gen_Instruction1_Type27(KXNORW);
    gen_Instruction1_Type27(KXNORD);
    gen_Instruction1_Type27(KXNORQ);
    gen_Instruction1_Type27(KXORB);
    gen_Instruction1_Type27(KXORW);
    gen_Instruction1_Type27(KXORD);
    gen_Instruction1_Type27(KXORQ);

    gen_Instruction1_Type28(KNOTB);
    gen_Instruction1_Type28(KNOTW);
    gen_Instruction1_Type28(KNOTD);
    gen_Instruction1_Type28(KNOTQ);
    gen_Instruction1_Type28(KORTESTB);
    gen_Instruction1_Type28(KORTESTW);
    gen_Instruction1_Type28(KORTESTD);
    gen_Instruction1_Type28(KORTESTQ);
    gen_Instruction1_Type28(KTESTB);
    gen_Instruction1_Type28(KTESTW);
    gen_Instruction1_Type28(KTESTD);
    gen_Instruction1_Type28(KTESTQ);

    gen_Instruction1_Type29(KSHIFTLB);
    gen_Instruction1_Type29(KSHIFTLW);
    gen_Instruction1_Type29(KSHIFTLD);
    gen_Instruction1_Type29(KSHIFTLQ);
    gen_Instruction1_Type29(KSHIFTRB);
    gen_Instruction1_Type29(KSHIFTRW);
    gen_Instruction1_Type29(KSHIFTRD);
    gen_Instruction1_Type29(KSHIFTRQ);

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

    gen_Instruction2_Type12(SHA1RNDS4);

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
    gen_Instruction2_Type29(VRSQRTSS);

    gen_Instruction2_Type30(VDPPD);

    gen_Instruction2_Type31(VLDDQU);
    gen_Instruction2_Type31(VMOVNTDQA);

    gen_Instruction2_Type32(VMOVNTPS);
    gen_Instruction2_Type32(VMOVNTDQ);

    gen_Instruction2_Type34(VEXTRACTF128);

    gen_Instruction2_Type35(VINSERTF128);

    gen_Instruction2_Type36(VPERM2F128);

    gen_Instruction2_Type37(PEXTRD);

    gen_Instruction2_Type38(SHA256RNDS2);

    gen_Instruction2_Type39(INVEPT);
    gen_Instruction2_Type39(INVVPID);

    gen_Instruction2_Type40(VMCLEAR);
    gen_Instruction2_Type40(VMPTRLD);
    gen_Instruction2_Type40(VMPTRST);

    gen_Instruction2_Type41(VBROADCASTF32X4);

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

    gen_Instruction4_Type25(VCVTSI2SS);
    gen_Instruction4_Type25(VCVTSI2SD);

    gen_Instruction4_Type26(VMREAD);

    gen_Instruction4_Type27(VMWRITE);

    gen_Instruction5_Type1(NOP);

    gen_Instruction5_Type2(PEXTRW);

    gen_Instruction5_Type3(KMOVB);
    gen_Instruction5_Type4(KMOVW);
    gen_Instruction5_Type5(KMOVD);

    gen_Instruction6_Type1(PSLLW);
    gen_Instruction6_Type1(PSLLD);
    gen_Instruction6_Type1(PSLLQ);
    gen_Instruction6_Type1(PSRLW);
    gen_Instruction6_Type1(PSRLD);
    gen_Instruction6_Type1(PSRLQ);
    gen_Instruction6_Type1(PSRAW);
    gen_Instruction6_Type1(PSRAD);

    gen_Instruction6_Type2(CMOVA);
    gen_Instruction6_Type2(CMOVAE);
    gen_Instruction6_Type2(CMOVB);
    gen_Instruction6_Type2(CMOVBE);
    gen_Instruction6_Type2(CMOVC);
    gen_Instruction6_Type2(CMOVE);
    gen_Instruction6_Type2(CMOVG);
    gen_Instruction6_Type2(CMOVGE);
    gen_Instruction6_Type2(CMOVL);
    gen_Instruction6_Type2(CMOVLE);
    gen_Instruction6_Type2(CMOVNA);
    gen_Instruction6_Type2(CMOVNAE);
    gen_Instruction6_Type2(CMOVNBE);
    gen_Instruction6_Type2(CMOVNC);
    gen_Instruction6_Type2(CMOVNE);
    gen_Instruction6_Type2(CMOVNG);
    gen_Instruction6_Type2(CMOVNGE);
    gen_Instruction6_Type2(CMOVNL);
    gen_Instruction6_Type2(CMOVNLE);
    gen_Instruction6_Type2(CMOVNO);
    gen_Instruction6_Type2(CMOVNP);
    gen_Instruction6_Type2(CMOVNS);
    gen_Instruction6_Type2(CMOVNZ);
    gen_Instruction6_Type2(CMOVO);
    gen_Instruction6_Type2(CMOVP);
    gen_Instruction6_Type2(CMOVPE);
    gen_Instruction6_Type2(CMOVPO);
    gen_Instruction6_Type2(CMOVS);
    gen_Instruction6_Type2(CMOVZ);
    gen_Instruction6_Type2(BSF);
    gen_Instruction6_Type2(BSR);
    gen_Instruction6_Type2(POPCNT);

    gen_Instruction6_Type3(IN);

    gen_Instruction6_Type4(OUT);

    gen_Instruction6_Type5(VMOVAPS);
    gen_Instruction6_Type5(VMOVAPD);
    gen_Instruction6_Type5(VMOVDQA);
    gen_Instruction6_Type5(VMOVUPS);
    gen_Instruction6_Type5(VMOVUPD);
    gen_Instruction6_Type5(VMOVDQU);

    gen_Instruction6_Type6(VBROADCASTSS);

    label("gen_Instruction7_Type1_label");
    gen_Instruction7_Type1(JMP);
    gen_Instruction7_Type1(CALL);

    gen_Instruction7_Type2(POP);

    label("gen_Instruction7_Type3_label");
    gen_Instruction7_Type3(JMP_FAR);
    gen_Instruction7_Type3(CALL_FAR);

    gen_Instruction8_Type1(MOVD);

    gen_Instruction8_Type2(MOVQ);

    gen_Instruction8_Type3(MUL);
    gen_Instruction8_Type3(IMUL);
    gen_Instruction8_Type3(DIV);
    gen_Instruction8_Type3(IDIV);
    gen_Instruction8_Type3(NEG);
    gen_Instruction8_Type3(INC);
    gen_Instruction8_Type3(DEC);
    gen_Instruction8_Type3(NOT);

    gen_Instruction8_Type4(XADD);
    gen_Instruction8_Type4(CMPXCHG);

    gen_Instruction8_Type5(VPERMILPD);
    gen_Instruction8_Type5(VPERMILPS);

    gen_Instruction10_Type1(PUSH);

    gen_Instruction10_Type2(CRC32);

    gen_Instruction12_Type1(BT);
    gen_Instruction12_Type1(BTC);
    gen_Instruction12_Type1(BTR);
    gen_Instruction12_Type1(BTS);

    gen_Instruction12_Type2(XCHG);

    gen_Instruction12_Type3(MOVSX);
    gen_Instruction12_Type3(MOVZX);

    gen_Instruction12_Type4(SHLD);
    gen_Instruction12_Type4(SHRD);

    gen_Instruction16_Type1(TEST);

    gen_Instruction16_Type2(SAL);
    gen_Instruction16_Type2(SAR);
    gen_Instruction16_Type2(SHL);
    gen_Instruction16_Type2(SHR);
    gen_Instruction16_Type2(RCL);
    gen_Instruction16_Type2(RCR);
    gen_Instruction16_Type2(ROL);
    gen_Instruction16_Type2(ROR);

    gen_Instruction26_Type1(ADD);
    gen_Instruction26_Type1(ADC);
    gen_Instruction26_Type1(SUB);
    gen_Instruction26_Type1(SBB);
    gen_Instruction26_Type1(CMP);
    gen_Instruction26_Type1(AND);
    gen_Instruction26_Type1(OR);
    gen_Instruction26_Type1(XOR);

    gen_Instruction36_Type1(MOV);

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

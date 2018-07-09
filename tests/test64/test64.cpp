#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "cppasm.h"

extern void gen_Instruction1();
extern void gen_Instruction2();
extern void gen_Instruction3();

static void gen_Instruction4_Type1(Instruction4_Type1 &instr)
{
    m64 addr1 { RAX };
    m128 addr2 { RBX };
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
    m64 addr { RBX };
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
    m32 addr { RAX };
    instr(XMM0, EAX);
    instr(XMM0, addr);
    instr(EAX, XMM0);
    instr(addr, XMM0);
}

static void gen_Instruction4_Type6(Instruction4_Type6 &instr)
{
    m64 addr { RAX };
    instr(XMM0, RAX);
    instr(XMM0, addr);
    instr(RAX, XMM0);
    instr(addr, XMM0);
}

static void gen_Instruction4_Type7(Instruction4_Type7 &instr)
{
    m32 addr1 { EAX };
    m64 addr2 { EBX };
    instr(EAX, EBX);
    instr(EAX, addr1);
    instr(RAX, RBX);
    instr(RAX, addr2);
}

static void gen_Instruction4_Type8(Instruction4_Type8 &instr)
{
    m32 addr1 { RAX };
    m64 addr2 { RBX };
    instr(XMM0, EAX);
    instr(XMM0, addr1);
    instr(XMM0, RAX);
    instr(XMM0, addr2);
}

static void gen_Instruction4_Type9(Instruction4_Type9 &instr)
{
    m32 addr { EAX };
    instr(EAX, XMM0);
    instr(EAX, addr);
    instr(RAX, XMM0);
    instr(RAX, addr);
}

static void gen_Instruction4_Type10(Instruction4_Type10 &instr)
{
    m32fp addr1 { RAX };
    m64fp addr2 { RBX };
    instr();
    instr(ST(1));
    instr(addr1);
    instr(addr2);
}

static void gen_Instruction4_Type11(Instruction4_Type11 &instr)
{
    m16 addr { RAX };
    imm8 mask { 255 };
    instr(MM0, EAX, mask);
    instr(MM0, addr, mask);
    instr(XMM0, EAX, mask);
    instr(XMM0, addr, mask);
}

static void gen_Instruction4_Type12(Instruction4_Type12 &instr)
{
    instr(EAX, MM0);
    instr(RAX, MM0);
    instr(EAX, XMM0);
    instr(RAX, XMM0);
}

static void gen_Instruction4_Type13(Instruction4_Type13 &instr)
{
    m64 addr { RAX };
    instr(EAX, XMM0);
    instr(EAX, addr);
    instr(RAX, XMM0);
    instr(RAX, addr);
}

static void gen_Instruction4_Type14(Instruction4_Type14 &instr)
{
    m128 addr { RAX };
    instr(XMM0, XMM1);
    instr(XMM0, addr);
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, addr, XMM1);
}

static void gen_Instruction4_Type15(Instruction4_Type15 &instr)
{
    m64 addr1 { RAX };
    m128 addr2 { RBX };
    instr(XMM0, XMM1);
    instr(XMM0, addr1);
    instr(YMM0, XMM0);
    instr(YMM0, addr2);
}

static void gen_Instruction4_Type16(Instruction4_Type16 &instr)
{
    m64 addr1 { RAX };
    m128 addr2 { RBX };
    imm8 mask { 255 };
    instr(XMM0, XMM1, mask);
    instr(addr1, XMM0, mask);
    instr(XMM0, YMM0, mask);
    instr(addr2, YMM0, mask);
}

static void gen_Instruction4_Type17(Instruction4_Type17 &instr)
{
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    instr(XMM0, XMM1, XMM2);
    instr(XMM0, XMM1, addr1);
    instr(YMM0, YMM1, YMM2);
    instr(YMM0, YMM1, addr2);
}

static void gen_Instruction4_Type18(Instruction4_Type18 &instr)
{
    m128 addr1 { RAX };
    m256 addr2 { RBX };
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
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    instr(XMM0, XMM1, XMM2, mask);
    instr(XMM0, XMM1, addr1, mask);
    instr(YMM0, YMM1, YMM2, mask);
    instr(YMM0, YMM1, addr2, mask);
}

static void gen_Instruction4_Type21(Instruction4_Type21 &instr)
{
    imm8 mask { 255 };
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    instr(XMM0, XMM1, mask);
    instr(XMM0, addr1, mask);
    instr(YMM0, YMM1, mask);
    instr(YMM0, addr2, mask);
}

static void gen_Instruction4_Type22(Instruction4_Type22 &instr)
{
    instr(EAX, XMM0);
    instr(RAX, XMM0);
    instr(EAX, YMM0);
    instr(RAX, YMM0);
}

static void gen_Instruction4_Type23(Instruction4_Type23 &instr)
{
    m128 addr { RAX };
    instr(XMM0, XMM1, XMM2, XMM3);
    instr(XMM0, XMM1, addr, XMM3);
    instr(YMM0, YMM1, YMM2, YMM3);
    instr(YMM0, YMM1, addr, YMM3);
}

static void gen_Instruction4_Type24(Instruction4_Type24 &instr)
{
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    instr(XMM0, XMM1, addr1);
    instr(YMM0, YMM1, addr2);
    instr(addr1, XMM0, XMM1);
    instr(addr2, YMM0, YMM1);
}

static void gen_Instruction4_Type25(Instruction4_Type25 &instr)
{
    m32 addr1 { RAX };
    m64 addr2 { RBX };
    instr(XMM0, XMM1, EAX);
    instr(XMM0, XMM1, addr1);
    instr(XMM0, XMM1, RBX);
    instr(XMM0, XMM1, addr2);
}

static void gen_Instruction4_Type26(Instruction4_Type26 &instr)
{
    m64 addr2 { RDX };
    instr(RAX, RBX);
    instr(addr2, RBX);
}

static void gen_Instruction4_Type27(Instruction4_Type27 &instr)
{
    m64 addr2 { RDX };
    instr(RAX, RBX);
    instr(RBX, addr2);
}

static void gen_Instruction5_Type1(Instruction5_Type1 &instr)
{
    m16 addr1 { RAX };
    m32 addr2 { RBX };
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
    instr(RAX, MM0, mask);
    instr(EAX, XMM0, mask);
    instr(RAX, XMM0, mask);
    instr(addr, XMM0, mask);
}

static void gen_Instruction5_Type3(Instruction5_Type3 &instr)
{
    m8 addr { RDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction5_Type4(Instruction5_Type4 &instr)
{
    m16 addr { RDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction5_Type5(Instruction5_Type5 &instr)
{
    m32 addr { RDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, EAX);
    instr(EAX, k2);
}

static void gen_Instruction5_Type6(Instruction5_Type6 &instr)
{
    m64 addr { RDX };
    instr(k1, k2);
    instr(k1, addr);
    instr(addr, k1);
    instr(k1, RAX);
    instr(RAX, k2);
}

static void gen_Instruction6_Type1(Instruction6_Type1 &instr)
{
    m64 addr1 { RAX };
    m128 addr2 { RBX };
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
    m16 addr1 { RAX };
    m32 addr2 { RBX };
    m64 addr3 { RCX };
    instr(AX, BX);
    instr(AX, addr1);
    instr(EAX, EBX);
    instr(EAX, addr2);
    instr(RAX, RBX);
    instr(RAX, addr3);
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
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    instr(XMM0, XMM1);
    instr(XMM0, addr1);
    instr(addr1, XMM0);
    instr(YMM0, YMM2);
    instr(YMM0, addr2);
    instr(addr2, YMM0);
}

static void gen_Instruction6_Type6(Instruction6_Type6 &instr)
{
    m32 addr { RBX };
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

static void gen_Instruction6_Type7(Instruction6_Type7 &instr)
{
    m64 addr { EBX };
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
    m16 addr1 { RAX };
    m32 addr2 { RBX };
    m64 addr3 { RBX };
    std::string loc { "gen_Instruction7_Type1_label" };
    instr(loc);
    instr(RAX);
    instr(addr1);
    instr(addr2);
    instr(addr3);
}

static void gen_Instruction7_Type2(Instruction7_Type2 &instr)
{
    m16 addr1 { RAX };
    m64 addr2 { RCX };
    instr(AX);
    instr(addr1);
    instr(RCX);
    instr(addr2);
    instr(FS);
}

static void gen_Instruction7_Type3(Instruction7_Type3 &instr)
{
    m16 addr1 { RAX };
    m32 addr2 { RBX };
    m64 addr3 { RBX };
    std::string loc { "gen_Instruction7_Type3_label" };
    instr(loc);
    instr(addr1);
    instr(addr2);
    instr(addr3);
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
    m64 addr { RDX };
    instr(MM0, RAX);
    instr(MM0, addr);
    instr(RAX, MM0);
    instr(addr, MM0);
    instr(XMM0, RAX);
    instr(XMM0, addr);
    instr(RAX, XMM0);
    instr(addr, XMM0);
}

static void gen_Instruction8_Type3(Instruction8_Type3 &instr)
{
    instr(AL);
    instr(AX);
    instr(EAX);
    instr(RAX);

    m8  addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(addr1);
    instr(addr2);
    instr(addr3);
    instr(addr4);
}

static void gen_Instruction8_Type4(Instruction8_Type4 &instr)
{
    m8  addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(AL, BL);
    instr(addr1, CL);
    instr(AX, BX);
    instr(addr2, CX);
    instr(EAX, EBX);
    instr(addr3, ECX);
    instr(RAX, RBX);
    instr(addr4, RCX);
}

static void gen_Instruction8_Type5(Instruction8_Type5 &instr)
{
    m128 addr1 { RDX };
    m256 addr2 { RDX };
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

static void gen_Instruction9_Type1(Instruction9_Type1 &instr)
{
    m8 addr { RBX };
    instr(XMM0, EAX);
    instr(YMM0, EAX);
    instr(ZMM0, EAX);
    instr(XMM0.k1, EAX);
    instr(YMM0.k1, EAX);
    instr(ZMM0.k1, EAX);
    instr(XMM0.k1.z, EAX);
    instr(YMM0.k1.z, EAX);
    instr(ZMM0.k1.z, EAX);
    instr(XMM0, XMM0);
    instr(YMM0, XMM0);
    instr(ZMM0, XMM0);
    instr(XMM0.k1, XMM0);
    instr(YMM0.k1, XMM0);
    instr(ZMM0.k1, XMM0);
    instr(XMM0.k1.z, XMM0);
    instr(YMM0.k1.z, XMM0);
    instr(ZMM0.k1.z, XMM0);
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
}

static void gen_Instruction9_Type2(Instruction9_Type2 &instr)
{
    m16 addr { RBX };
    instr(XMM0, EAX);
    instr(YMM0, EAX);
    instr(ZMM0, EAX);
    instr(XMM0.k1, EAX);
    instr(YMM0.k1, EAX);
    instr(ZMM0.k1, EAX);
    instr(XMM0.k1.z, EAX);
    instr(YMM0.k1.z, EAX);
    instr(ZMM0.k1.z, EAX);
    instr(XMM0, XMM0);
    instr(YMM0, XMM0);
    instr(ZMM0, XMM0);
    instr(XMM0.k1, XMM0);
    instr(YMM0.k1, XMM0);
    instr(ZMM0.k1, XMM0);
    instr(XMM0.k1.z, XMM0);
    instr(YMM0.k1.z, XMM0);
    instr(ZMM0.k1.z, XMM0);
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
}

static void gen_Instruction9_Type3(Instruction9_Type3 &instr)
{
    m32 addr { RBX };
    instr(XMM0, EAX);
    instr(YMM0, EAX);
    instr(ZMM0, EAX);
    instr(XMM0.k1, EAX);
    instr(YMM0.k1, EAX);
    instr(ZMM0.k1, EAX);
    instr(XMM0.k1.z, EAX);
    instr(YMM0.k1.z, EAX);
    instr(ZMM0.k1.z, EAX);
    instr(XMM0, XMM0);
    instr(YMM0, XMM0);
    instr(ZMM0, XMM0);
    instr(XMM0.k1, XMM0);
    instr(YMM0.k1, XMM0);
    instr(ZMM0.k1, XMM0);
    instr(XMM0.k1.z, XMM0);
    instr(YMM0.k1.z, XMM0);
    instr(ZMM0.k1.z, XMM0);
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
}

static void gen_Instruction9_Type4(Instruction9_Type4 &instr)
{
    m64 addr { RBX };
    instr(XMM0, RAX);
    instr(YMM0, RAX);
    instr(ZMM0, RAX);
    instr(XMM0.k1, RAX);
    instr(YMM0.k1, RAX);
    instr(ZMM0.k1, RAX);
    instr(XMM0.k1.z, RAX);
    instr(YMM0.k1.z, RAX);
    instr(ZMM0.k1.z, RAX);
    instr(XMM0, XMM0);
    instr(YMM0, XMM0);
    instr(ZMM0, XMM0);
    instr(XMM0.k1, XMM0);
    instr(YMM0.k1, XMM0);
    instr(ZMM0.k1, XMM0);
    instr(XMM0.k1.z, XMM0);
    instr(YMM0.k1.z, XMM0);
    instr(ZMM0.k1.z, XMM0);
    instr(XMM0, addr);
    instr(YMM0, addr);
    instr(ZMM0, addr);
    instr(XMM0.k1, addr);
    instr(YMM0.k1, addr);
    instr(ZMM0.k1, addr);
    instr(XMM0.k1.z, addr);
    instr(YMM0.k1.z, addr);
    instr(ZMM0.k1.z, addr);
}

static void gen_Instruction10_Type1(Instruction10_Type1 &instr)
{
    instr(AX);
    instr(RAX);
    m16 addr1 { RDX };
    m64 addr3 { RDX };
    instr(addr1);
    instr(addr3);
    imm8 v1 { 0xAA };
    imm16 v2 { 0xAABB };
    instr(v1);
    instr(v2);
    instr(GS);
}

static void gen_Instruction10_Type2(Instruction10_Type2 &instr)
{
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(ECX, AL);
    instr(ECX, addr1);
    instr(ECX, AX);
    instr(ECX, addr2);
    instr(ECX, EAX);
    instr(ECX, addr3);
    instr(RCX, AL);
    instr(RCX, addr1);
    instr(RCX, RAX);
    instr(RCX, addr4);
}

static void gen_Instruction12_Type1(Instruction12_Type1 &instr)
{
    m16 addr1 { RDX };
    m32 addr2 { RDX };
    m64 addr3 { RDX };
    imm8 value { 1 };
    instr(AX, BX);
    instr(addr1, AX);
    instr(EAX, EBX);
    instr(addr2, EAX);
    instr(RAX, RBX);
    instr(addr3, RAX);
    instr(AX, value);
    instr(EAX, value);
    instr(RAX, value);
    instr(addr1, value);
    instr(addr2, value);
    instr(addr3, value);
}

static void gen_Instruction12_Type2(Instruction12_Type2 &instr)
{
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(AL, BL);
    instr(addr1, CL);
    instr(CL, addr1);
    instr(AX, BX);
    instr(addr2, CX);
    instr(CX, addr2);
    instr(EAX, EBX);
    instr(addr3, ECX);
    instr(ECX, addr3);
    instr(RAX, RBX);
    instr(addr4, RCX);
    instr(RCX, addr4);
}

static void gen_Instruction12_Type3(Instruction12_Type3 &instr)
{
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    instr(AX, BL);
    instr(AX, addr1);
    instr(EAX, BL);
    instr(EAX, addr1);
    instr(RAX, BL);
    instr(RAX, addr1);
    instr(EAX, AX);
    instr(EAX, addr2);
    instr(RAX, BX);
    instr(RAX, addr2);
}

static void gen_Instruction12_Type4(Instruction12_Type4 &instr)
{
    imm8 value { 1 };
    m16 addr1 { RDX };
    m32 addr2 { RDX };
    m64 addr3 { RDX };
    instr(AX, BX, value);
    instr(addr1, BX, value);
    instr(AX, BX, CL);
    instr(addr1, BX, CL);
    instr(EAX, EBX, value);
    instr(addr2, EBX, value);
    instr(RAX, RBX, value);
    instr(addr3, RBX, value);
    instr(EAX, EBX, CL);
    instr(addr2, EBX, CL);
    instr(RAX, RBX, CL);
    instr(addr3, RBX, CL);
}

static void gen_Instruction16_Type1(Instruction16_Type1 &instr)
{
    imm8 value1 { 0xAA };
    imm16 value2 { 0xAABB };
    imm32 value3 { 0xAABBCCDD };
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(AL, value1);
    instr(addr1, value1);
    instr(AX, value2);
    instr(addr2, value2);
    instr(EAX, value3);
    instr(addr3, value3);
    //instr(RAX, value3);
    //instr(addr4, value3);
    instr(AL, AH);
    instr(addr1, AL);
    instr(AX, BX);
    instr(addr2, AX);
    instr(EAX, EBX);
    instr(addr3, EAX);
    instr(RAX, RBX);
    instr(addr4, RAX);
}

static void gen_Instruction16_Type2(Instruction16_Type2 &instr)
{
    imm8 value { 1 };
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
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
    instr(RAX, value);
    instr(addr4, value);
    instr(RAX, CL);
    instr(addr4, CL);
}

static void gen_Instruction26_Type1(Instruction26_Type1 &instr)
{
    imm8 value1 { 1 };
    imm16 value2 { 2 };
    imm32 value3 { 3 };
    m8 addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };
    instr(AL, value1);
    instr(addr1, value1);
    instr(AX, value2);
    instr(addr2, value2);
    instr(EAX, value3);
    instr(addr3, value3);
    instr(RAX, value3);
    instr(addr4, value3);
    instr(AX, value1);
    instr(addr2, value1);
    instr(EAX, value1);
    instr(addr3, value1);
    instr(RAX, value1);
    instr(addr4, value1);
    instr(AL, BL);
    instr(addr1, BL);
    instr(AX, BX);
    instr(addr2, BX);
    instr(EAX, EBX);
    instr(addr3, EBX);
    instr(RAX, RCX);
    instr(addr4, RCX);
    instr(AL, addr1);
    instr(AX, addr2);
    instr(EAX, addr3);
    instr(RAX, addr4);
}

static void gen_Instruction36_Type1(Instruction36_Type1 &instr)
{
    imm8 value1 { 0x42 };
    imm16 value2 { 0x4242 };
    imm32 value3 { 0x42424242 };
    imm64 value4 { 0x4242424242424242 };
    m8  addr1 { RDX };
    m16 addr2 { RDX };
    m32 addr3 { RDX };
    m64 addr4 { RDX };

    instr(AL, CL);
    instr(addr1, CL);
    instr(AX, CX);
    instr(addr2, CX);
    instr(EAX, ECX);
    instr(addr3, ECX);
    instr(RAX, RCX);
    instr(addr4, RCX);
    instr(AL, addr1);
    instr(AX, addr2);
    instr(EAX, addr3);
    instr(RAX, addr4);
    instr(AX, DS);
    instr(addr2, DS);
    instr(RAX, DS);
    instr(addr4, DS);
    instr(DS, CX);
    instr(DS, addr2);
    instr(DS, RCX);
    instr(DS, addr4);
    instr(AL, value1);
    instr(AX, value2);
    instr(EAX, value3);
    instr(RAX, value4);
    instr(addr1, value1);
    instr(addr2, value2);
    instr(addr3, value3);
    instr(addr4, value3);
    instr(RAX, CR0);
    instr(CR0, RCX);
    instr(RAX, DR0);
    instr(DR0, RCX);
}

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    section code { ".text" };

    code.start();

    gen_Instruction1();
    gen_Instruction2();
    gen_Instruction3();

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

    gen_Instruction4_Type6(VMOVQ);

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
    gen_Instruction5_Type6(KMOVQ);

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

    gen_Instruction6_Type7(VBROADCASTI32X2);

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

    gen_Instruction9_Type1(VPBROADCASTB);
    gen_Instruction9_Type2(VPBROADCASTW);
    gen_Instruction9_Type3(VPBROADCASTD);
    gen_Instruction9_Type4(VPBROADCASTQ);

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

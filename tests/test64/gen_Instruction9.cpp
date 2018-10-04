#include "cppasm.h"

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

static void gen_Instruction9_Type5(Instruction9_Type5 &instr)
{
    imm8 value { 1 };
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    m512 addr3 { RCX };
    m32 addr4 { RDX };

    instr(XMM1, XMM2, XMM3, value);
    instr(XMM1, XMM2, addr1, value);
    instr(XMM1, XMM2, addr4.broadcast(1, 4), value);
    instr(YMM1, YMM2, YMM3, value);
    instr(YMM1, YMM2, addr2, value);
    instr(YMM1, YMM2, addr4.broadcast(1, 8), value);
    instr(ZMM1, ZMM2, ZMM3, value);
    instr(ZMM1, ZMM2, addr3, value);
    instr(ZMM1, ZMM2, addr4.broadcast(1, 16), value);
}

static void gen_Instruction9_Type6(Instruction9_Type6 &instr)
{
    imm8 value { 1 };
    m128 addr1 { RAX };
    m256 addr2 { RBX };
    m512 addr3 { RCX };
    m64 addr4 { RDX };

    instr(XMM1, XMM2, XMM3, value);
    instr(XMM1, XMM2, addr1, value);
    instr(XMM1, XMM2, addr4.broadcast(1, 2), value);
    instr(YMM1, YMM2, YMM3, value);
    instr(YMM1, YMM2, addr2, value);
    instr(YMM1, YMM2, addr4.broadcast(1, 4), value);
    instr(ZMM1, ZMM2, ZMM3, value);
    instr(ZMM1, ZMM2, addr3, value);
    instr(ZMM1, ZMM2, addr4.broadcast(1, 8), value);
}

static void gen_Instruction9_Type7(Instruction9_Type7 &instr)
{
    m32 addr1 { RAX };
    m128 addr2 { RBX };
    m256 addr3 { RCX };
    m512 addr4 { RDX };

    instr(XMM2, XMM1, XMM0);
    instr(XMM2, XMM1, addr2);
    instr(XMM2, XMM1, addr1.broadcast(1, 4));
    instr(YMM2, YMM1, YMM0);
    instr(YMM2, YMM1, addr3);
    instr(YMM2, YMM1, addr1.broadcast(1, 8));
    instr(ZMM2, ZMM1, ZMM0);
    instr(ZMM2, ZMM1, addr4);
    instr(ZMM2, ZMM1, addr1.broadcast(1, 16));
}

static void gen_Instruction9_Type8(Instruction9_Type8 &instr)
{
    m64 addr1 { RAX };
    m128 addr2 { RBX };
    m256 addr3 { RCX };
    m512 addr4 { RDX };

    instr(XMM2, XMM1, XMM0);
    instr(XMM2, XMM1, addr2);
    instr(XMM2, XMM1, addr1.broadcast(1, 2));
    instr(YMM2, YMM1, YMM0);
    instr(YMM2, YMM1, addr3);
    instr(YMM2, YMM1, addr1.broadcast(1, 4));
    instr(ZMM2, ZMM1, ZMM0);
    instr(ZMM2, ZMM1, addr4);
    instr(ZMM2, ZMM1, addr1.broadcast(1, 8));
}

static void gen_Instruction9_Type9(Instruction9_Type9 &instr)
{
    m32 addr1 { RAX };
    m128 addr2 { RBX };
    m256 addr3 { RCX };
    m512 addr4 { RDX };

    instr(XMM1, XMM0);
    instr(XMM1, addr2);
    instr(XMM1, addr1.broadcast(1, 4));
    instr(YMM1, YMM0);
    instr(YMM1, addr3);
    instr(YMM1, addr1.broadcast(1, 8));
    instr(ZMM1, ZMM0);
    instr(ZMM1, addr4);
    instr(ZMM1, addr1.broadcast(1, 16));
}

void gen_Instruction9()
{
    comment("gen_Instruction9");

    gen_Instruction9_Type1(VPBROADCASTB);
    gen_Instruction9_Type2(VPBROADCASTW);
    gen_Instruction9_Type3(VPBROADCASTD);
    gen_Instruction9_Type4(VPBROADCASTQ);
    gen_Instruction9_Type5(VALIGND);
    gen_Instruction9_Type6(VALIGNQ);
    gen_Instruction9_Type7(VBLENDMPS);
    gen_Instruction9_Type8(VBLENDMPD);
    gen_Instruction9_Type9(VCVTPS2UDQ);
}

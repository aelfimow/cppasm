#include "cppasm.h"

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

static void gen_Instruction8_Type6(Instruction8_Type6 &instr)
{
    m64 addr1 { EAX };
    m128 addr2 { EBX };
    m256 addr3 { ECX };
    m512 addr4 { EDX };

    instr(XMM2, XMM1);
    instr(XMM2, YMM1);
    instr(YMM1, ZMM0);
    instr(XMM2, addr1.broadcast(1, 4));
    instr(YMM1, addr1.broadcast(1, 8));
    instr(XMM2, addr2);
    instr(XMM2, addr3);
    instr(YMM1, addr4);
}

void gen_Instruction8()
{
    comment("gen_Instruction8");

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

    gen_Instruction8_Type6(VCVTPD2UDQ);
    gen_Instruction8_Type6(VCVTTPD2UDQ);
}

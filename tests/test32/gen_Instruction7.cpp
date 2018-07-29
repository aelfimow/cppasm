#include "cppasm.h"

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

void gen_Instruction7()
{
    comment("gen_Instruction7");

    label("gen_Instruction7_Type1_label");
    gen_Instruction7_Type1(JMP);
    gen_Instruction7_Type1(CALL);

    gen_Instruction7_Type2(POP);

    label("gen_Instruction7_Type3_label");
    gen_Instruction7_Type3(JMP_FAR);
    gen_Instruction7_Type3(CALL_FAR);
}

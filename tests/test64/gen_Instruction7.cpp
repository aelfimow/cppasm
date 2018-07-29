#include "cppasm.h"

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

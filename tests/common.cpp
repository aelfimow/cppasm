#include "cppasm.h"
#include "common.h"

void gen_Instruction1_Type1(Instruction1_Type1 &instr)
{
    instr();
}

void gen_Instruction1_Type2(Instruction1_Type2 &instr)
{
    m64 addr { RAX };

    instr(addr);
}

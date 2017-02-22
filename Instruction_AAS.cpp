#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_AAS.h"

Instruction_AAS::Instruction_AAS(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_AAS::operator()()
{
    Instruction instr { "aas" };
    m_asmout << instr;
}

Instruction_AAS::~Instruction_AAS()
{
}

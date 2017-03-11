#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_STC.h"

Instruction_STC::Instruction_STC(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_STC::operator()()
{
    Instruction instr { "stc" };
    m_asmout << instr;
}

Instruction_STC::~Instruction_STC()
{
}

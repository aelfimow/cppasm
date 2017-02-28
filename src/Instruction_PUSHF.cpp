#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_PUSHF.h"

Instruction_PUSHF::Instruction_PUSHF(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_PUSHF::operator()()
{
    Instruction instr { "pushf" };
    m_asmout << instr;
}

Instruction_PUSHF::~Instruction_PUSHF()
{
}

#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_NoOperands.h"

Instruction_NoOperands::Instruction_NoOperands(asmstream &s, const std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_NoOperands::operator()()
{
    Instruction instr { m_mnem };
    m_asmout << instr;
}

Instruction_NoOperands::~Instruction_NoOperands()
{
}

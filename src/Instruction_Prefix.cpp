#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_Prefix.h"

Instruction_Prefix::Instruction_Prefix(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_Prefix::operator()()
{
    m_asmout.prefix(m_mnem);
}

Instruction_Prefix::~Instruction_Prefix()
{
}

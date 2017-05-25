#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_StringOp.h"

Instruction_StringOp::Instruction_StringOp(asmstream &s, const std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_StringOp::operator()()
{
    Instruction instr { m_mnem };
    m_asmout << instr;
}

Instruction_StringOp::~Instruction_StringOp()
{
}

#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r32.h"
#include "r64.h"
#include "Instruction_FSGSBASE.h"

Instruction_FSGSBASE::Instruction_FSGSBASE(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_FSGSBASE::operator()(const r32 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

void Instruction_FSGSBASE::operator()(const r64 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

Instruction_FSGSBASE::~Instruction_FSGSBASE()
{
}

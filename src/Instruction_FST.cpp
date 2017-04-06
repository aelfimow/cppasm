#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m32.h"
#include "m64.h"
#include "Instruction_FST.h"

Instruction_FST::Instruction_FST(asmstream &s, std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_FST::operator()(const m32 &op)
{
    std::string mnem { m_mnem + "s" };
    Instruction instr { mnem, op.to_str() };
    m_asmout << instr;
}

void Instruction_FST::operator()(const m64 &op)
{
    std::string mnem { m_mnem + "l" };
    Instruction instr { mnem, op.to_str() };
    m_asmout << instr;
}

Instruction_FST::~Instruction_FST()
{
}

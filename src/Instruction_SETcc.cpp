#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r8.h"
#include "m.h"
#include "m8.h"
#include "Instruction_SETcc.h"

Instruction_SETcc::Instruction_SETcc(asmstream &s, std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_SETcc::operator()(const r8 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

void Instruction_SETcc::operator()(const m8 &op1)
{
    Instruction instr { m_mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_SETcc::~Instruction_SETcc()
{
}

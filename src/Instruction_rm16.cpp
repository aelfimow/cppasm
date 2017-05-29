#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "m.h"
#include "m16.h"
#include "Instruction_rm16.h"

Instruction_rm16::Instruction_rm16(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_rm16::operator()(const r16 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

void Instruction_rm16::operator()(const m16 &op1)
{
    Instruction instr { m_mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_rm16::~Instruction_rm16()
{
}

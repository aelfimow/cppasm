#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "m.h"
#include "m16.h"
#include "Instruction_VerifySegment.h"

Instruction_VerifySegment::Instruction_VerifySegment(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_VerifySegment::operator()(const r16 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

void Instruction_VerifySegment::operator()(const m16 &op1)
{
    Instruction instr { m_mnem, op1.to_str() };
    m_asmout << instr;
}

Instruction_VerifySegment::~Instruction_VerifySegment()
{
}

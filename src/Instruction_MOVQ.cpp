#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r64.h"
#include "mm.h"
#include "xmm.h"
#include "m.h"
#include "m64.h"
#include "Instruction_MOVQ.h"

Instruction_MOVQ::Instruction_MOVQ(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_MOVQ::operator()(const mm &op1, const r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOVQ::operator()(const mm &op1, const m64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOVQ::operator()(const r64 &op1, const mm &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOVQ::operator()(const m64 &op1, const mm &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOVQ::operator()(const xmm &op1, const r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOVQ::operator()(const xmm &op1, const m64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOVQ::operator()(const r64 &op1, const xmm &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOVQ::operator()(const m64 &op1, const xmm &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

Instruction_MOVQ::~Instruction_MOVQ()
{
}

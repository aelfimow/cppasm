#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r64.h"
#include "xmm.h"
#include "m.h"
#include "m64.h"
#include "Instruction_VMOVQ.h"

Instruction_VMOVQ::Instruction_VMOVQ(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_VMOVQ::operator()(const xmm &op1, const r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_VMOVQ::operator()(const xmm &op1, const m64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_VMOVQ::operator()(const r64 &op1, const xmm &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_VMOVQ::operator()(const m64 &op1, const xmm &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

Instruction_VMOVQ::~Instruction_VMOVQ()
{
}

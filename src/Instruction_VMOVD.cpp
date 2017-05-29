#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r32.h"
#include "xmm.h"
#include "m.h"
#include "m32.h"
#include "Instruction_VMOVD.h"

Instruction_VMOVD::Instruction_VMOVD(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_VMOVD::operator()(const xmm &op1, const r32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_VMOVD::operator()(const xmm &op1, const m32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_VMOVD::operator()(const r32 &op1, const xmm &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_VMOVD::operator()(const m32 &op1, const xmm &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

Instruction_VMOVD::~Instruction_VMOVD()
{
}

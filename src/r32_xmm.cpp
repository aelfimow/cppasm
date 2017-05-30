#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r32.h"
#include "xmm.h"
#include "r32_xmm.h"

r32_xmm::r32_xmm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void r32_xmm::operator()(r32 &op1, xmm &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

r32_xmm::~r32_xmm()
{
}

#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r64.h"
#include "xmm.h"
#include "r64_xmm.h"

r64_xmm::r64_xmm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void r64_xmm::operator()(r64 &op1, xmm &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

r64_xmm::~r64_xmm()
{
}

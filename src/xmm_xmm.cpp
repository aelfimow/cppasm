#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "xmm.h"
#include "xmm_xmm.h"

xmm_xmm::xmm_xmm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void xmm_xmm::operator()(xmm &op1, xmm &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

xmm_xmm::~xmm_xmm()
{
}

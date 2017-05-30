#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r64.h"
#include "xmm.h"
#include "xmm_r64.h"

xmm_r64::xmm_r64(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void xmm_r64::operator()(xmm &op1, r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

xmm_r64::~xmm_r64()
{
}

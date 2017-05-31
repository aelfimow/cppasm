#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m128.h"
#include "xmm.h"
#include "xmm_m128.h"

xmm_m128::xmm_m128(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void xmm_m128::operator()(xmm &op1, m128 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

xmm_m128::~xmm_m128()
{
}

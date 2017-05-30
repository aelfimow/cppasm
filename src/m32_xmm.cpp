#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m32.h"
#include "xmm.h"
#include "m32_xmm.h"

m32_xmm::m32_xmm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void m32_xmm::operator()(m32 &op1, xmm &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

m32_xmm::~m32_xmm()
{
}

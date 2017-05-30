#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "m.h"
#include "m64.h"
#include "xmm.h"
#include "m64_xmm.h"

m64_xmm::m64_xmm(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void m64_xmm::operator()(m64 &op1, xmm &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

m64_xmm::~m64_xmm()
{
}

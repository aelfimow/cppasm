#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "Instruction_REP.h"
#include "Instruction_StringOp.h"

Instruction_REP::Instruction_REP(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_REP::operator()(Instruction_StringOp &StrOp)
{
    StrOp();
}

Instruction_REP::~Instruction_REP()
{
}

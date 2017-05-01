#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r32.h"
#include "r64.h"
#include "Instruction_BSWAP.h"

Instruction_BSWAP::Instruction_BSWAP(asmstream &s) :
    m_asmout { s },
    m_mnem { "bswap" }
{
}

void Instruction_BSWAP::operator()(const r32 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

void Instruction_BSWAP::operator()(const r64 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

Instruction_BSWAP::~Instruction_BSWAP()
{
}

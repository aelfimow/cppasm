#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "Instruction_RDRAND.h"

Instruction_RDRAND::Instruction_RDRAND(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_RDRAND::operator()(const r16 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

void Instruction_RDRAND::operator()(const r32 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

void Instruction_RDRAND::operator()(const r64 &op1)
{
    Instruction instr { m_mnem, op1.name() };
    m_asmout << instr;
}

Instruction_RDRAND::~Instruction_RDRAND()
{
}

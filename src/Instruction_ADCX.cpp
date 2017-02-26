#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r32.h"
#include "r64.h"
#include "m.h"
#include "Instruction_ADCX.h"

Instruction_ADCX::Instruction_ADCX(asmstream &s) :
    m_asmout { s }
{
}

void Instruction_ADCX::operator()(const r32 &op1, const r32 &op2)
{
    Instruction instr { "adcx", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_ADCX::operator()(const r32 &op1, const m &op2)
{
    Instruction instr { "adcx", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADCX::operator()(const r64 &op1, const r64 &op2)
{
    Instruction instr { "adcx", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_ADCX::operator()(const r64 &op1, const m &op2)
{
    Instruction instr { "adcx", op1.name(), op2.to_str() };
    m_asmout << instr;
}

Instruction_ADCX::~Instruction_ADCX()
{
}

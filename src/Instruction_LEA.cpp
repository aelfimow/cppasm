#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "m.h"
#include "Instruction_LEA.h"

Instruction_LEA::Instruction_LEA(asmstream &s) :
    m_asmout { s }
{
}

void Instruction_LEA::operator()(const r16 &op1, const m &op2)
{
    Instruction instr { "lea", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_LEA::operator()(const r32 &op1, const m &op2)
{
    Instruction instr { "lea", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_LEA::operator()(const r64 &op1, const m &op2)
{
    Instruction instr { "lea", op1.name(), op2.to_str() };
    m_asmout << instr;
}

Instruction_LEA::~Instruction_LEA()
{
}

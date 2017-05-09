#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r8.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "imm8.h"
#include "m.h"
#include "m8.h"
#include "m16.h"
#include "m32.h"
#include "m64.h"
#include "Instruction_ShiftDouble.h"

Instruction_ShiftDouble::Instruction_ShiftDouble(asmstream &s, std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_ShiftDouble::operator()(const r16 &op1, const r16 &op2, const imm8 &op3)
{
    Instruction instr { m_mnem, op1.name(), op2.name(), op3.to_str() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const r32 &op1, const r32 &op2, const imm8 &op3)
{
    Instruction instr { m_mnem, op1.name(), op2.name(), op3.to_str() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const r64 &op1, const r64 &op2, const imm8 &op3)
{
    Instruction instr { m_mnem, op1.name(), op2.name(), op3.to_str() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const r16 &op1, const r16 &op2, const r8 &op3)
{
    Instruction instr { m_mnem, op1.name(), op2.name(), op3.name() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const r32 &op1, const r32 &op2, const r8 &op3)
{
    Instruction instr { m_mnem, op1.name(), op2.name(), op3.name() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const r64 &op1, const r64 &op2, const r8 &op3)
{
    Instruction instr { m_mnem, op1.name(), op2.name(), op3.name() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const m16 &op1, const r16 &op2, const imm8 &op3)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name(), op3.to_str() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const m32 &op1, const r32 &op2, const imm8 &op3)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name(), op3.to_str() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const m64 &op1, const r64 &op2, const imm8 &op3)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name(), op3.to_str() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const m16 &op1, const r16 &op2, const r8 &op3)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name(), op3.name() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const m32 &op1, const r32 &op2, const r8 &op3)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name(), op3.name() };
    m_asmout << instr;
}

void Instruction_ShiftDouble::operator()(const m64 &op1, const r64 &op2, const r8 &op3)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name(), op3.name() };
    m_asmout << instr;
}

Instruction_ShiftDouble::~Instruction_ShiftDouble()
{
}

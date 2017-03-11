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
#include "Instruction_Shift.h"

Instruction_Shift::Instruction_Shift(asmstream &s, std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_Shift::operator()(const r8 &op1, const imm8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const r16 &op1, const imm8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const r32 &op1, const imm8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const r64 &op1, const imm8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const r8 &op1, const r8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const r16 &op1, const r8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const r32 &op1, const r8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const r64 &op1, const r8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const m8 &op1, const imm8 &op2)
{
    std::string mnem { m_mnem };
    mnem.append(op1.postfix());

    Instruction instr { mnem, op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const m16 &op1, const imm8 &op2)
{
    std::string mnem { m_mnem };
    mnem.append(op1.postfix());

    Instruction instr { mnem, op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const m32 &op1, const imm8 &op2)
{
    std::string mnem { m_mnem };
    mnem.append(op1.postfix());

    Instruction instr { mnem, op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const m64 &op1, const imm8 &op2)
{
    std::string mnem { m_mnem };
    mnem.append(op1.postfix());

    Instruction instr { mnem, op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const m8 &op1, const r8 &op2)
{
    std::string mnem { m_mnem };
    mnem.append(op1.postfix());

    Instruction instr { mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const m16 &op1, const r8 &op2)
{
    std::string mnem { m_mnem };
    mnem.append(op1.postfix());

    Instruction instr { mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const m32 &op1, const r8 &op2)
{
    std::string mnem { m_mnem };
    mnem.append(op1.postfix());

    Instruction instr { mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_Shift::operator()(const m64 &op1, const r8 &op2)
{
    std::string mnem { m_mnem };
    mnem.append(op1.postfix());

    Instruction instr { mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

Instruction_Shift::~Instruction_Shift()
{
}

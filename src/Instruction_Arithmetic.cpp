#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "imm8.h"
#include "imm16.h"
#include "imm32.h"
#include "m.h"
#include "m16.h"
#include "m32.h"
#include "m64.h"
#include "Instruction_Arithmetic.h"

Instruction_Arithmetic::Instruction_Arithmetic(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_Arithmetic::operator()(const r16 &op1, const imm16 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const m16 &op1, const imm16 &op2)
{
    std::string mnem { m_mnem + op1.postfix() };
    Instruction instr { mnem, op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const r32 &op1, const imm32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const m32 &op1, const imm32 &op2)
{
    std::string mnem { m_mnem + op1.postfix() };
    Instruction instr { mnem, op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const r64 &op1, const imm32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const m64 &op1, const imm32 &op2)
{
    std::string mnem { m_mnem + op1.postfix() };
    Instruction instr { mnem, op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const reg &op1, const imm8 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const m &op1, const imm8 &op2)
{
    std::string mnem { m_mnem + "b" };
    Instruction instr { mnem, op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const m &op1, const reg &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const reg &op1, const m &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_Arithmetic::operator()(const reg &op1, const reg &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

Instruction_Arithmetic::~Instruction_Arithmetic()
{
}

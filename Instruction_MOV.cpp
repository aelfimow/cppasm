#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r8.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "imm8.h"
#include "imm16.h"
#include "imm32.h"
#include "imm64.h"
#include "m.h"
#include "m8.h"
#include "m16.h"
#include "m32.h"
#include "m64.h"
#include "Sreg.h"
#include "cr.h"
#include "dr.h"
#include "Instruction_MOV.h"

Instruction_MOV::Instruction_MOV(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_MOV::operator()(const r8 &op1, const r8 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r8 &op1, const m8 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const m8 &op1, const r8 &op2)
{
    Instruction instr { "mov", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r16 &op1, const r16 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r16 &op1, const m16 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const m16 &op1, const r16 &op2)
{
    Instruction instr { "mov", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r32 &op1, const r32 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r32 &op1, const m32 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const m32 &op1, const r32 &op2)
{
    Instruction instr { "mov", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r64 &op1, const r64 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r64 &op1, const m64 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const m64 &op1, const r64 &op2)
{
    Instruction instr { "mov", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r8 &op1, const imm8 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r16 &op1, const imm16 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r32 &op1, const imm32 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r64 &op1, const imm64 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const Sreg &op1, const r16 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const Sreg &op1, const m16 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const Sreg &op1, const r64 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const Sreg &op1, const m64 &op2)
{
    Instruction instr { "mov", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r32 &op1, const cr &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r64 &op1, const cr &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const cr &op1, const r32 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const cr &op1, const r64 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r32 &op1, const dr &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const r64 &op1, const dr &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const dr &op1, const r32 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MOV::operator()(const dr &op1, const r64 &op2)
{
    Instruction instr { "mov", op1.name(), op2.name() };
    m_asmout << instr;
}

Instruction_MOV::~Instruction_MOV()
{
}

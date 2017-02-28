#include <cstdint>
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
#include "Sreg.h"
#include "Instruction_PUSH.h"

Instruction_PUSH::Instruction_PUSH(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_PUSH::operator()(const r16 &op1)
{
    Instruction instr { "push", op1.name() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const r32 &op1)
{
    Instruction instr { "push", op1.name() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const r64 &op1)
{
    Instruction instr { "push", op1.name() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const m16 &op1)
{
    Instruction instr { "pushw", op1.to_str() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const m32 &op1)
{
    Instruction instr { "pushl", op1.to_str() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const m64 &op1)
{
    Instruction instr { "pushq", op1.to_str() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const imm8 &op1)
{
    Instruction instr { "pushb", op1.to_str() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const imm16 &op1)
{
    Instruction instr { "pushw", op1.to_str() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const imm32 &op1)
{
    Instruction instr { "pushl", op1.to_str() };
    m_asmout << instr;
}

void Instruction_PUSH::operator()(const Sreg &op1)
{
    Instruction instr { "push", op1.name() };
    m_asmout << instr;
}

Instruction_PUSH::~Instruction_PUSH()
{
}

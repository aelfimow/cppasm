#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "m.h"
#include "m16.h"
#include "m32.h"
#include "m64.h"
#include "Sreg.h"
#include "Instruction_POP.h"

Instruction_POP::Instruction_POP(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_POP::operator()(const r16 &op1)
{
    Instruction instr { "pop", op1.name() };
    m_asmout << instr;
}

void Instruction_POP::operator()(const r32 &op1)
{
    Instruction instr { "pop", op1.name() };
    m_asmout << instr;
}

void Instruction_POP::operator()(const r64 &op1)
{
    Instruction instr { "pop", op1.name() };
    m_asmout << instr;
}

void Instruction_POP::operator()(const m16 &op1)
{
    Instruction instr { "popw", op1.to_str() };
    m_asmout << instr;
}

void Instruction_POP::operator()(const m32 &op1)
{
    Instruction instr { "popl", op1.to_str() };
    m_asmout << instr;
}

void Instruction_POP::operator()(const m64 &op1)
{
    Instruction instr { "popq", op1.to_str() };
    m_asmout << instr;
}

void Instruction_POP::operator()(const Sreg &op1)
{
    Instruction instr { "pop", op1.name() };
    m_asmout << instr;
}

Instruction_POP::~Instruction_POP()
{
}

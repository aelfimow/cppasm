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
#include "Instruction_LoadFarPointer.h"

Instruction_LoadFarPointer::Instruction_LoadFarPointer(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_LoadFarPointer::operator()(const r16 &op1, const m &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_LoadFarPointer::operator()(const r32 &op1, const m &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_LoadFarPointer::operator()(const r64 &op1, const m &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

Instruction_LoadFarPointer::~Instruction_LoadFarPointer()
{
}

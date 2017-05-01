#include <cstdint>
#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r8.h"
#include "r16.h"
#include "r32.h"
#include "r64.h"
#include "m.h"
#include "m8.h"
#include "m16.h"
#include "m32.h"
#include "Instruction_MovWithExt.h"

Instruction_MovWithExt::Instruction_MovWithExt(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_MovWithExt::operator()(const r16 &op1, const r8 &op2)
{
    const std::string mnem { m_mnem + "bw" };
    Instruction instr { mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r16 &op1, const m8 &op2)
{
    const std::string mnem { m_mnem + "bw" };
    Instruction instr { mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r32 &op1, const r8 &op2)
{
    const std::string mnem { m_mnem + "bl" };
    Instruction instr { mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r32 &op1, const m8 &op2)
{
    const std::string mnem { m_mnem + "bl" };
    Instruction instr { mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r64 &op1, const r8 &op2)
{
    const std::string mnem { m_mnem + "bq" };
    Instruction instr { mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r64 &op1, const m8 &op2)
{
    const std::string mnem { m_mnem + "bq" };
    Instruction instr { mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r32 &op1, const r16 &op2)
{
    const std::string mnem { m_mnem + "wl" };
    Instruction instr { mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r32 &op1, const m16 &op2)
{
    const std::string mnem { m_mnem + "wl" };
    Instruction instr { mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r64 &op1, const r16 &op2)
{
    const std::string mnem { m_mnem + "wq" };
    Instruction instr { mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r64 &op1, const m16 &op2)
{
    const std::string mnem { m_mnem + "wq" };
    Instruction instr { mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_MovWithExt::operator()(const r64 &op1, const m32 &op2)
{
    const std::string mnem { m_mnem + "lq" };
    Instruction instr { mnem, op1.name(), op2.to_str() };
    m_asmout << instr;
}

Instruction_MovWithExt::~Instruction_MovWithExt()
{
}

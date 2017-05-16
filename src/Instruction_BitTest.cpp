#include <cstdint>
#include <sstream>
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
#include "Instruction_BitTest.h"

Instruction_BitTest::Instruction_BitTest(asmstream &s, const std::string mnem) :
    m_asmout { s },
    m_mnem { mnem }
{
}

void Instruction_BitTest::operator()(const r16 &op1, const r16 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const m16 &op1, const r16 &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const r16 &op1, uint8_t op2)
{
    std::ostringstream ss;
    ss << op2;
    Instruction instr { m_mnem, op1.name(), ss.str() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const m16 &op1, uint8_t op2)
{
    std::ostringstream ss;
    ss << op2;
    Instruction instr { m_mnem, op1.to_str(), ss.str() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const r32 &op1, const r32 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const m32 &op1, const r32 &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const r32 &op1, uint8_t op2)
{
    std::ostringstream ss;
    ss << op2;
    Instruction instr { m_mnem, op1.name(), ss.str() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const m32 &op1, uint8_t op2)
{
    std::ostringstream ss;
    ss << op2;
    Instruction instr { m_mnem, op1.to_str(), ss.str() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const r64 &op1, const r64 &op2)
{
    Instruction instr { m_mnem, op1.name(), op2.name() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const m64 &op1, const r64 &op2)
{
    Instruction instr { m_mnem, op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const r64 &op1, uint8_t op2)
{
    std::ostringstream ss;
    ss << op2;
    Instruction instr { m_mnem, op1.name(), ss.str() };
    m_asmout << instr;
}

void Instruction_BitTest::operator()(const m64 &op1, uint8_t op2)
{
    std::ostringstream ss;
    ss << op2;
    Instruction instr { m_mnem, op1.to_str(), ss.str() };
    m_asmout << instr;
}

Instruction_BitTest::~Instruction_BitTest()
{
}

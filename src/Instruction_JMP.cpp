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
#include "Instruction_JMP.h"

Instruction_JMP::Instruction_JMP(asmstream &s, std::string mnem) :
    m_asmout(s),
    m_mnem { mnem }
{
}

void Instruction_JMP::operator()(std::string label_str)
{
    Instruction instr { m_mnem, label_str };
    m_asmout << instr;
}

void Instruction_JMP::operator()(const r16 &op1)
{
    const std::string op { "*" + op1.name() };
    Instruction instr { m_mnem, op };
    m_asmout << instr;
}

void Instruction_JMP::operator()(const m16 &op1)
{
    const std::string op { "*" + op1.to_str() };
    Instruction instr { m_mnem, op };
    m_asmout << instr;
}

void Instruction_JMP::operator()(const r32 &op1)
{
    const std::string op { "*" + op1.name() };
    Instruction instr { m_mnem, op };
    m_asmout << instr;
}

void Instruction_JMP::operator()(const m32 &op1)
{
    const std::string op { "*" + op1.to_str() };
    Instruction instr { m_mnem, op };
    m_asmout << instr;
}

void Instruction_JMP::operator()(const r64 &op1)
{
    const std::string op { "*" + op1.name() };
    Instruction instr { m_mnem, op };
    m_asmout << instr;
}

void Instruction_JMP::operator()(const m64 &op1)
{
    const std::string op { "*" + op1.to_str() };
    Instruction instr { m_mnem, op };
    m_asmout << instr;
}

Instruction_JMP::~Instruction_JMP()
{
}

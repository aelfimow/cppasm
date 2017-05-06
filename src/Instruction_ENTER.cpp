#include <string>
#include "Instruction.h"
#include "asmstream.h"
#include "imm8.h"
#include "imm16.h"
#include "Instruction_ENTER.h"

Instruction_ENTER::Instruction_ENTER(asmstream &s) :
    m_asmout { s }
{
}

void Instruction_ENTER::operator()(const imm16 &op1, const imm8 &op2)
{
    const std::string str { "enter " + op1.to_str() + ", " + op2.to_str() } ;
    Instruction instr { str };
    m_asmout << instr;
}

Instruction_ENTER::~Instruction_ENTER()
{
}

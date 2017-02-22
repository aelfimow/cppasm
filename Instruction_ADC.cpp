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
#include "Instruction_ADC.h"

Instruction_ADC::Instruction_ADC(asmstream &s) :
    m_asmout(s)
{
}

void Instruction_ADC::operator()(const r16 &op1, const imm16 &op2)
{
    Instruction instr { "adc", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const m16 &op1, const imm16 &op2)
{
    Instruction instr { "adcw", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const r32 &op1, const imm32 &op2)
{
    Instruction instr { "adc", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const m32 &op1, const imm32 &op2)
{
    Instruction instr { "adcl", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const r64 &op1, const imm32 &op2)
{
    Instruction instr { "adc", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const m64 &op1, const imm32 &op2)
{
    Instruction instr { "adcq", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const reg &op1, const imm8 &op2)
{
    Instruction instr { "adc", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const m &op1, const imm8 &op2)
{
    Instruction instr { "adcb", op1.to_str(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const m &op1, const reg &op2)
{
    Instruction instr { "adc", op1.to_str(), op2.name() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const reg &op1, const m &op2)
{
    Instruction instr { "adc", op1.name(), op2.to_str() };
    m_asmout << instr;
}

void Instruction_ADC::operator()(const reg &op1, const reg &op2)
{
    Instruction instr { "adc", op1.name(), op2.name() };
    m_asmout << instr;
}

Instruction_ADC::~Instruction_ADC()
{
}

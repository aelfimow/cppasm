#include <cstdint>
#include <string>
#include <stdexcept>
#include "Instruction.h"
#include "asmstream.h"
#include "reg.h"
#include "r16.h"
#include "r32.h"
#include "m.h"
#include "m16.h"
#include "m32.h"
#include "Instruction_NOP.h"


Instruction_NOP::Instruction_NOP(asmstream &s) :
    m_asmout { s }
{
}

void Instruction_NOP::operator()()
{
    Instruction instr { "nop" };
    m_asmout << instr;
}

void Instruction_NOP::operator()(size_t bytes)
{
    switch (bytes)
    {
        case 0:
        case 1:
            Instruction instr { "nop" };
            m_asmout << instr;
            break;
        case 2:
            Instruction instr { ".byte 0x66, 0x90" };
            m_asmout << instr;
            break;
        case 3:
            Instruction instr { ".byte 0x0F, 0x1F, 0x00" };
            m_asmout << instr;
            break;
        case 4:
            Instruction instr { ".byte 0x0F, 0x1F, 0x40, 0x00" };
            m_asmout << instr;
            break;
        case 5:
            Instruction instr { ".byte 0x0F, 0x1F, 0x44, 0x00, 0x00" };
            m_asmout << instr;
            break;
        case 6:
            Instruction instr { ".byte 0x66, 0x0F, 0x1F, 0x44, 0x00, 0x00" };
            m_asmout << instr;
            break;
        case 7:
            Instruction instr { ".byte 0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00" };
            m_asmout << instr;
            break;
        case 8:
            Instruction instr { ".byte 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00" };
            m_asmout << instr;
            break;
        case 9:
            Instruction instr { ".byte 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00" };
            m_asmout << instr;
            break;
        default:
            throw std::invalid_argument("Multi-byte NOP: invalid bytes argument");
    }
}

void Instruction_NOP::operator()(const r16 &op1)
{
    Instruction instr { "nop", op1.name() };
    m_asmout << instr;
}

void Instruction_NOP::operator()(const m16 &op1)
{
    Instruction instr { "nopw", op1.to_str() };
    m_asmout << instr;
}

void Instruction_NOP::operator()(const r32 &op1)
{
    Instruction instr { "nop", op1.name() };
    m_asmout << instr;
}

void Instruction_NOP::operator()(const m32 &op1)
{
    Instruction instr { "nopl", op1.to_str() };
    m_asmout << instr;
}

Instruction_NOP::~Instruction_NOP()
{
}

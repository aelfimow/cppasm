#include <string>
#include <sstream>
#include <iomanip>
#include "imm16.h"

imm16::imm16(uint16_t value) :
    m_value(value)
{
}

imm16::~imm16()
{
}

std::string imm16::to_str() const
{
    std::ostringstream ss;

    ss << "$0x" << std::setfill('0') << std::setw(4) << std::hex << std::uppercase << m_value;

    return ss.str();
}

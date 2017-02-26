#include <string>
#include <sstream>
#include <iomanip>
#include "imm8.h"

imm8::imm8(uint8_t value) :
    m_value(value)
{
}

imm8::~imm8()
{
}

std::string imm8::to_str() const
{
    std::ostringstream ss;

    ss << "$0x" << std::setfill('0') << std::setw(2) << std::hex << std::uppercase << static_cast<size_t>(m_value);

    return ss.str();
}

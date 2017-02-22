#include <string>
#include <sstream>
#include <iomanip>
#include "imm32.h"

imm32::imm32(uint32_t value) :
    m_value(value)
{
}

imm32::~imm32()
{
}

std::string imm32::to_str() const
{
    std::ostringstream ss;

    ss << "$0x" << std::setfill('0') << std::setw(8) << std::hex << std::uppercase << m_value;

    return ss.str();
}

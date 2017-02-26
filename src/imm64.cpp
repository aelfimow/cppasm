#include <string>
#include <sstream>
#include <iomanip>
#include "imm64.h"

imm64::imm64(uint64_t value) :
    m_value(value)
{
}

imm64::~imm64()
{
}

std::string imm64::to_str() const
{
    std::ostringstream ss;

    ss << "$0x" << std::setfill('0') << std::setw(16) << std::hex << std::uppercase << m_value;

    return ss.str();
}

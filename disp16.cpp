#include <string>
#include <sstream>
#include "disp16.h"

disp16::disp16(uint16_t value) :
    m_value(value)
{
}

disp16::~disp16()
{
}

std::string disp16::to_str() const
{
    std::ostringstream ss;

    ss << m_value;

    return ss.str();
}

#include <string>
#include <sstream>
#include "disp32.h"

disp32::disp32(uint32_t value) :
    m_value(value)
{
}

disp32::~disp32()
{
}

std::string disp32::to_str() const
{
    std::ostringstream ss;

    ss << m_value;

    return ss.str();
}

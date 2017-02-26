#include <string>
#include <sstream>
#include "disp8.h"

disp8::disp8(uint8_t value) :
    m_value(value)
{
}

disp8::~disp8()
{
}

std::string disp8::to_str() const
{
    std::ostringstream ss;

    ss << static_cast<size_t>(m_value);

    return ss.str();
}

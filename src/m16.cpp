#include <sstream>
#include <string>
#include "reg.h"
#include "m.h"
#include "m16.h"

m16::m16(const reg &base, const reg &index) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ", " + index.name() + ")";
}

m16::m16(const reg &base, const reg &index, size_t scale) :
    m(),
    m_str { "" }
{
    std::ostringstream ss;
    ss << scale;

    m_str = "(" + base.name() + ", " + index.name() + ", " + ss.str() + ")";
}

m16::~m16()
{
}

std::string m16::to_str() const
{
    return m_str;
}

std::string m16::postfix() const
{
    return "w";
}

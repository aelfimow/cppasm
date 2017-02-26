#include <sstream>
#include <string>
#include "reg.h"
#include "m.h"
#include "m32.h"

m32::m32(const reg &base, const reg &index) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ", " + index.name() + ")";
}

m32::m32(const reg &base, const reg &index, size_t scale) :
    m(),
    m_str { "" }
{
    std::ostringstream ss;
    ss << scale;

    m_str = "(" + base.name() + ", " + index.name() + ", " + ss.str() + ")";
}

m32::~m32()
{
}

std::string m32::to_str() const
{
    return m_str;
}

std::string m32::postfix() const
{
    return "l";
}

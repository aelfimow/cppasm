#include <sstream>
#include <string>
#include "reg.h"
#include "m.h"
#include "m8.h"

m8::m8(const reg &base, const reg &index) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ", " + index.name() + ")";
}

m8::m8(const reg &base, const reg &index, size_t scale) :
    m(),
    m_str { "" }
{
    std::ostringstream ss;
    ss << scale;

    m_str = "(" + base.name() + ", " + index.name() + ", " + ss.str() + ")";
}

m8::~m8()
{
}

std::string m8::to_str() const
{
    return m_str;
}

std::string m8::postfix() const
{
    return "b";
}

#include <sstream>
#include <string>
#include "reg.h"
#include "m.h"
#include "m64.h"

m64::m64(const reg &base) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ")";
}

m64::m64(const reg &base, const reg &index) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ", " + index.name() + ")";
}

m64::m64(const reg &base, const reg &index, size_t scale) :
    m(),
    m_str { "" }
{
    std::ostringstream ss;
    ss << scale;

    m_str = "(" + base.name() + ", " + index.name() + ", " + ss.str() + ")";
}

m64::~m64()
{
}

std::string m64::to_str() const
{
    return m_str;
}

std::string m64::postfix() const
{
    return "q";
}

#include <sstream>
#include <string>
#include "reg.h"
#include "m.h"
#include "m80.h"

m80::m80(const reg &base) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ")";
}

m80::m80(const reg &base, const reg &index) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ", " + index.name() + ")";
}

m80::m80(const reg &base, const reg &index, size_t scale) :
    m(),
    m_str { "" }
{
    std::ostringstream ss;
    ss << scale;

    m_str = "(" + base.name() + ", " + index.name() + ", " + ss.str() + ")";
}

m80::~m80()
{
}

std::string m80::to_str() const
{
    return m_str;
}

std::string m80::postfix() const
{
    return "t";
}

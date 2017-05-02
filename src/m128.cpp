#include <sstream>
#include <string>
#include "reg.h"
#include "m.h"
#include "m128.h"

m128::m128(const reg &base) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ")";
}

m128::m128(const reg &base, const reg &index) :
    m(),
    m_str { "" }
{
    m_str = "(" + base.name() + ", " + index.name() + ")";
}

m128::m128(const reg &base, const reg &index, size_t scale) :
    m(),
    m_str { "" }
{
    std::ostringstream ss;
    ss << scale;

    m_str = "(" + base.name() + ", " + index.name() + ", " + ss.str() + ")";
}

m128::~m128()
{
}

std::string m128::to_str() const
{
    return m_str;
}

std::string m128::postfix() const
{
    return "";
}

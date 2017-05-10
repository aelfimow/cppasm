#include <sstream>
#include <string>
#include "reg.h"
#include "m.h"
#include "m64.h"

m64::m64() :
    m {},
    m_base { "" },
    m_index { "" },
    m_scale { "" },
    m_disp { "" }
{
}

m64::m64(const reg &base) :
    m {},
    m_base { base.name() },
    m_index { "" },
    m_scale { "" },
    m_disp { "" }
{
}

m64::m64(const reg &base, const reg &index) :
    m(),
    m_base { base.name() },
    m_index { index.name() },
    m_scale { "" },
    m_disp { "" }
{
}

m64::m64(const reg &base, const reg &index, size_t scale) :
    m(),
    m_base { base.name() },
    m_index { index.name() },
    m_scale { "" },
    m_disp { "" }
{
    std::ostringstream ss;
    ss << scale;
    m_scale = ss.str();
}

m64::~m64()
{
}

m64 &m64::base(const reg &b)
{
    m_base = b.name();
    return *this;
}

m64 &m64::index(const reg &i)
{
    m_index = i.name();
    return *this;
}

m64 &m64::scale(size_t value)
{
    std::ostringstream ss;
    ss << value;
    m_scale = ss.str();
    return *this;
}

m64 &m64::disp(size_t value)
{
    if (0 == value)
    {
        m_disp.clear();
    }
    else
    {
        std::ostringstream ss;
        ss << value;
        m_disp = ss.str();
    }
    return *this;
}

std::string m64::to_str() const
{
    std::string str;

    str.append("(");
    str.append(m_base);

    if (0 != m_index.length())
    {
        str.append(", " + m_index);

        if (0 != m_scale.length())
        {
            str.append(", " + m_scale);
        }
    }
    else
    {
        // No index register, expect scale to be empty, if not, error
        if (0 != m_scale.length())
        {
            throw std::logic_error("No index register, but scale is set");
        }
    }

    str.append(")");

    return { m_disp + str };
}

std::string m64::postfix() const
{
    return "q";
}

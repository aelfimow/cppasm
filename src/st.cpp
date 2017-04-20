#include <string>
#include <sstream>
#include "st.h"

st::st() :
    m_name { "%st(0)" }
{
}

st::st(size_t i) :
    m_name { "" }
{
    if (i > 7)
    {
        throw std::invalid_argument("Invalid ST register index");
    }

    std::ostringstream ss;

    ss << "%st(" << i << ")";

    m_name = ss.str();
}

st::~st()
{
}

st st::operator()(size_t i)
{
    st st_i { i };

    return st_i;
}

std::string st::name() const
{
    return m_name;
}

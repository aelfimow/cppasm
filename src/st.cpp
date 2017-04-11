#include <string>
#include <sstream>
#include "st.h"

st::st() :
    m_name { }
{
}

st::~st()
{
}

st &st::operator()(size_t i)
{
    if (i > 7)
    {
        throw std::invalid_argument("Invalid ST register index");
    }

    std::ostringstream ss;

    ss << "%st(" << i << ")";

    m_name = ss.str();

    return *this;
}

std::string st::name() const
{
    return m_name;
}

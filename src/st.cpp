/*! \file st.cpp
    \brief Class representing FPU's ST register.
*/
#include <string>
#include <sstream>
#include "reg.h"
#include "st.h"

static st ST0 { "%st(0)" };
static st ST1 { "%st(1)" };
static st ST2 { "%st(2)" };
static st ST3 { "%st(3)" };
static st ST4 { "%st(4)" };
static st ST5 { "%st(5)" };
static st ST6 { "%st(6)" };
static st ST7 { "%st(7)" };

st::st() :
    m_name { "%st(0)" }
{
}

st::st(std::string const &name) :
    m_name { name }
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

    if (i == 0)
    {
        return ST0;
    }

    if (i == 1)
    {
        return ST1;
    }

    if (i == 2)
    {
        return ST2;
    }

    if (i == 3)
    {
        return ST3;
    }

    if (i == 4)
    {
        return ST4;
    }

    if (i == 5)
    {
        return ST5;
    }

    if (i == 6)
    {
        return ST6;
    }

    return ST7;
}

std::string st::name() const
{
    return m_name;
}

/*! \file st.cpp
    \brief Class representing FPU's ST register.
*/
#include <string>
#include <sstream>
#include "reg.h"
#include "st.h"

static st ST0;
static st ST1;
static st ST2;
static st ST3;
static st ST4;
static st ST5;
static st ST6;
static st ST7;

st::st() :
    m_name { "%st(0)" }
{
    ST0.set(0);
    ST1.set(1);
    ST2.set(2);
    ST3.set(3);
    ST4.set(4);
    ST5.set(5);
    ST6.set(6);
    ST7.set(7);
}

void st::set(size_t i)
{
    std::ostringstream ss;

    ss << "%st(" << i << ")";

    m_name = ss.str();
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

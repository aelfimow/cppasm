/*! \file st.cpp
    \brief Class representing FPU's ST register.
*/
#include <string>
#include <map>
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
    static std::map<size_t, st&> const st_regs
    {
        { 0, ST0 },
        { 1, ST1 },
        { 2, ST2 },
        { 3, ST3 },
        { 4, ST4 },
        { 5, ST5 },
        { 6, ST6 },
        { 7, ST7 }
    };

    auto it = st_regs.find(i);

    if (it == st_regs.end())
    {
        throw std::invalid_argument("Invalid ST register index");
    }

    return it->second;
}

std::string st::name() const
{
    return m_name;
}

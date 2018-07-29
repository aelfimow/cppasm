/*! \file section.cpp
    \brief Class for assembler section keyword.
*/
#include <string>
#include "asmstream.h"
#include "section.h"

extern asmstream asmout;

section::section(const std::string &name) :
    m_asmout { asmout },
    m_name(name)
{
}

section::~section()
{
}

void section::start()
{
    const std::string str1 { ".section" };
    const std::string str { str1 + " " + m_name };

    m_asmout << str;
}

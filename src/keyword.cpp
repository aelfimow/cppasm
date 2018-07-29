/*! \file keyword.cpp
    \brief Class for assembler keywords.
*/
#include <string>
#include "asmstream.h"
#include "keyword.h"

keyword::keyword(asmstream &s) :
    m_asmout { s },
    m_str { }
{
}

keyword::keyword(asmstream &s, const std::string str) :
    m_asmout { s },
    m_str { str }
{
}

void keyword::operator()(const std::string &name)
{
    bool const isEmpty { m_str.size() == 0 };

    if (isEmpty)
    {
        m_asmout << name;
    }
    else
    {
        const std::string str { m_str + " " + name };

        m_asmout << str;
    }
}

keyword::~keyword()
{
}

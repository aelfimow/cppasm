/*! \file keyword.cpp
    \brief Class for assembler keywords.
*/
#include <iostream>
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
        std::cout << name.c_str() << std::endl;
    }
    else
    {
        std::cout << m_str.c_str() << " " << name.c_str() << std::endl;
    }
}

keyword::~keyword()
{
}

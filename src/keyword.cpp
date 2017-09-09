#include <iostream>
#include <string>
#include "keyword.h"

keyword::keyword() :
    m_str { }
{
}

keyword::keyword(const std::string str) :
    m_str { str }
{
}

void keyword::operator()(const std::string &name)
{
    bool notEmpty { m_str.size() != 0 };

    if (notEmpty)
    {
        std::cout << m_str.c_str() << name.c_str() << std::endl;
    }
    else
    {
        std::cout << name.c_str() << std::endl;
    }
}

keyword::~keyword()
{
}

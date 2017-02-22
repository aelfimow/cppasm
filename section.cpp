#include <iostream>
#include <string>
#include "section.h"

section::section(const std::string &name) :
    m_name(name)
{
}

section::~section()
{
}

void section::start()
{
    std::cout << ".section " << m_name << std::endl;
}

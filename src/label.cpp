/*! \file label.cpp
    \brief Class for assembler labels.
*/
#include <string>
#include "asmstream.h"
#include "label.h"

Keyword_label::Keyword_label(asmstream &s) :
    m_asmout { s }
{
}

void Keyword_label::operator()(const std::string &name)
{
    const std::string str { name + ":" };

    m_asmout << str;
}

Keyword_label::~Keyword_label()
{
}

#include <string>
#include "Sreg.h"

Sreg::Sreg(const std::string &name) :
    m_name(name)
{
}

Sreg::~Sreg()
{
}

std::string Sreg::name() const
{
    return m_name;
}

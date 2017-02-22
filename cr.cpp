#include <string>
#include "cr.h"

cr::cr(const std::string &name) :
    m_name(name)
{
}

cr::~cr()
{
}

std::string cr::name() const
{
    return m_name;
}

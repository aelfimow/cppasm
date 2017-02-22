#include <string>
#include "mm.h"

mm::mm(const std::string &name) :
    m_name(name)
{
}

mm::~mm()
{
}

std::string mm::name() const
{
    return m_name;
}

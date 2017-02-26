#include <string>
#include "reg.h"
#include "r64.h"

r64::r64(const std::string &name) :
    reg(),
    m_name(name)
{
}

r64::~r64()
{
}

std::string r64::name() const
{
    return m_name;
}

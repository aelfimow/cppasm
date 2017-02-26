#include <string>
#include "reg.h"
#include "r16.h"

r16::r16(const std::string &name) :
    reg(),
    m_name(name)
{
}

r16::~r16()
{
}

std::string r16::name() const
{
    return m_name;
}

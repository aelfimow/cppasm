#include <string>
#include "reg.h"
#include "r8.h"

r8::r8(const std::string &name) :
    reg(),
    m_name(name)
{
}

r8::~r8()
{
}

std::string r8::name() const
{
    return m_name;
}

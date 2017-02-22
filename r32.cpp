#include <string>
#include "reg.h"
#include "r32.h"

r32::r32(const std::string &name) :
    reg(),
    m_name(name)
{
}

r32::~r32()
{
}

std::string r32::name() const
{
    return m_name;
}

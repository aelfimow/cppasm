/*! \file dr.cpp
    \brief Class representing Debug Register.
*/
#include <string>
#include "dr.h"

dr::dr(const std::string &name) :
    m_name(name)
{
}

dr::~dr()
{
}

std::string dr::name() const
{
    return m_name;
}

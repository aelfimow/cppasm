#include <string>
#include "ymm.h"

ymm::ymm(const std::string &name) :
    m_name(name)
{
}

ymm::~ymm()
{
}

std::string ymm::name() const
{
    return m_name;
}

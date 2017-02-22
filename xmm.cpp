#include <string>
#include "xmm.h"

xmm::xmm(const std::string &name) :
    m_name(name)
{
}

xmm::~xmm()
{
}

std::string xmm::name() const
{
    return m_name;
}

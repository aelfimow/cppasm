/*! \file asmstream.cpp
    \brief Class for Assembly Stream.
*/
#include <string>
#include "Instruction.h"
#include "streamdest.h"
#include "asmstream.h"
#include "streamdest_cout.h"

asmstream::asmstream() :
    m_streamdest { new streamdest_cout },
    m_prefix { false }
{
}

void asmstream::set(streamdest *p)
{
    delete m_streamdest;
    m_streamdest = p;
}

void asmstream::operator<<(const Instruction &instr)
{
    if (m_prefix)
    {
        m_streamdest->space();
        m_prefix = false;
    }
    else
    {
        m_streamdest->indent();
    }

    m_streamdest->writeln(instr.to_str());
}

void asmstream::operator<<(const std::string &str)
{
    m_streamdest->writeln(str);
}

void asmstream::prefix(const std::string &str)
{
    m_streamdest->indent();
    m_streamdest->write(str);
    m_prefix = true;
}

asmstream::~asmstream()
{
    delete m_streamdest;
}

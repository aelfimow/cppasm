/*! \file streamdest_cout.cpp
    \brief Class for Assembly Stream destination std::cout.
*/
#include <iostream>
#include "streamdest.h"
#include "streamdest_cout.h"

streamdest_cout::streamdest_cout()
{
}

streamdest_cout::~streamdest_cout()
{
}

void streamdest_cout::space()
{
    std::cout << ' ';
}

void streamdest_cout::indent()
{
    std::cout << '\t';
}

void streamdest_cout::write(const std::string &str)
{
    std::cout << str.c_str();
}

void streamdest_cout::writeln(const std::string &str)
{
    std::cout << str.c_str() << std::endl;
}

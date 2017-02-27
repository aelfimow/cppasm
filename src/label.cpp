#include <iostream>
#include <string>
#include "label.h"

label::label()
{
}

void label::operator()(const std::string &name)
{
    std::cout << name << ":" << std::endl;
}

label::~label()
{
}

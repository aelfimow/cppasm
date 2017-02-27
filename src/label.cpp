#include <iostream>
#include <string>
#include "label.h"

Keyword_label::Keyword_label()
{
}

void Keyword_label::operator()(const std::string &name)
{
    std::cout << name << ":" << std::endl;
}

Keyword_label::~Keyword_label()
{
}

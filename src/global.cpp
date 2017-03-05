#include <iostream>
#include <string>
#include "global.h"

Keyword_global::Keyword_global()
{
}

void Keyword_global::operator()(const std::string &name)
{
    std::cout << ".global " << name << std::endl;
}

Keyword_global::~Keyword_global()
{
}

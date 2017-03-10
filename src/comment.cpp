#include <iostream>
#include <string>
#include "comment.h"

Keyword_comment::Keyword_comment()
{
}

void Keyword_comment::operator()(const std::string &str)
{
    std::cout << "# " << str << std::endl;
}

Keyword_comment::~Keyword_comment()
{
}

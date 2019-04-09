#include <iostream>
#include <sstream>
#include <cstdlib>
#include <stdexcept>

static_assert(sizeof(size_t) == 8, "size_t expected to be 64 bit");

struct div_param;
extern "C" void div_arithm(struct div_param *p);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    if (argc != 4)
    {
        throw std::invalid_argument("Usage: example a b c");
    }

    size_t a = 0;
    {
        std::stringstream ss;
        ss << std::dec << argv[1];
        ss >> a;
    }

    size_t b = 0;
    {
        std::stringstream ss;
        ss << std::dec << argv[2];
        ss >> b;
    }

    size_t c = 0;
    {
        std::stringstream ss;
        ss << std::dec << argv[3];
        ss >> c;
    }

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    return EXIT_SUCCESS;
}
catch (std::exception &exc)
{
    std::cerr << "Exception: " << exc.what() << std::endl;
    return EXIT_FAILURE;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

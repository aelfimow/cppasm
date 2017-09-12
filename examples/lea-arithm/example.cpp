#include <iostream>
#include <sstream>
#include <cstdlib>
#include <stdexcept>

static_assert(sizeof(size_t) == 8, "size_t expected to be 64 bit");

extern "C" size_t lea_base_index(size_t a, size_t b);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    if (argc != 3)
    {
        throw std::invalid_argument("Usage: example a b. (a and b are decimal values)");
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

    auto result = lea_base_index(a, b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "result = " << result << std::endl;

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

#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" uint8_t isbn13(const void *p);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    const uint8_t numbers[] = { 9, 7, 8, 3, 7, 6, 5, 7, 2, 7, 8, 1 };

    const uint8_t checksum = isbn13(&numbers);

    if (checksum != 2)
    {
        std::cerr << "Wrong checksum: " << static_cast<size_t>(checksum) << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

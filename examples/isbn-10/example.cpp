#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" uint8_t isbn10(const void *p);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    const uint8_t numbers[] = { 3, 8, 6, 6, 8, 0, 1, 9, 2 };

    uint8_t checksum = isbn10(&numbers);

    if (checksum != 0)
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

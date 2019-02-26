#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" uint8_t isbn13(const void *p);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    const uint8_t numbers[] = { 3, 8, 6, 6, 8, 0, 1, 9, 2 };

    const uint8_t checksum = isbn13(&numbers);

    if (checksum != 0)
    {
        std::cerr << "Wrong checksum: " << static_cast<size_t>(checksum) << std::endl;
        return EXIT_FAILURE;
    }

    const uint8_t numbers2[] = { 3, 6, 8, 0, 0, 8, 7, 8, 3 };

    const uint8_t checksum2 = isbn13(&numbers2);

    if (checksum2 != 7)
    {
        std::cerr << "Wrong checksum2: " << static_cast<size_t>(checksum2) << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

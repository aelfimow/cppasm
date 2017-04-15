#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" void execute_cpuid(uint32_t cmd1, uint32_t cmd2, uint32_t *p_output);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    uint32_t buffer[4U];

    execute_cpuid(0, 0, buffer);

    for (auto value: buffer)
    {
        std::cout << std::hex << value << std::endl;
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

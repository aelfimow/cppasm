#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <string>
#include <vector>

static_assert(sizeof(size_t) == 8, "size_t expected to be 64 bit");
static_assert(sizeof(ssize_t) == 8, "ssize_t expected to be 64 bit");
static_assert(sizeof(char) == 1, "char expected to be 8 bit");

extern "C" void rc4init(const char key[], size_t L, char sbox[]); 
extern "C" void rc4run(const char buf_in[], size_t len, char buf_out[], char sbox[]);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    const std::string key { "12345" };

    constexpr size_t SBOX_SIZE = 256;
    std::vector<char> sbox(SBOX_SIZE);

    rc4init(key.c_str(), key.length(), sbox.data());

    for (auto c: sbox)
    {
        const uint8_t uc { static_cast<uint8_t>(c) };
        const size_t value { uc };

        std::cout << value << ";";
    }

    std::cout << std::endl;

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

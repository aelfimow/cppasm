#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <string>
#include <vector>

static_assert(sizeof(size_t) == 8, "size_t expected to be 64 bit");
static_assert(sizeof(ssize_t) == 8, "ssize_t expected to be 64 bit");
static_assert(sizeof(char) == 1, "char expected to be 8 bit");

extern "C" void rc4init(const char key[], size_t L, char sbox[]); 
extern "C" ssize_t rc4run(const char buf_in[], size_t len, char buf_out[], char sbox[]);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    const std::string key { "1234" };

    constexpr size_t SBOX_SIZE = 256;
    std::vector<char> sbox(SBOX_SIZE);

    rc4init(key.c_str(), key.length(), sbox.data());

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

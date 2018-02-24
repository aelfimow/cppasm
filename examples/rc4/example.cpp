#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <vector>

static_assert(sizeof(size_t) == 8, "size_t expected to be 64 bit");
static_assert(sizeof(ssize_t) == 8, "ssize_t expected to be 64 bit");

extern "C" void rc4init(const void *key, size_t L, void *sbox);
extern "C" void rc4run(const void *buf_in, size_t len, void *buf_out, void *sbox);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    const std::vector<uint8_t> key { 1, 2, 3, 4, 5 };

    constexpr size_t SBOX_SIZE = 256;
    std::vector<uint8_t> sbox(SBOX_SIZE);

    rc4init(key.data(), key.size(), sbox.data());

    for (auto s: sbox)
    {
        const size_t value { s };

        std::cout << value << ";";
    }

    std::cout << std::endl;

    const std::vector<uint8_t> klartext { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    std::vector<uint8_t> outbuf(klartext.size());

    rc4run(klartext.data(), klartext.size(), outbuf.data(), sbox.data());

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

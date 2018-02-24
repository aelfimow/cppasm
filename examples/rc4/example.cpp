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

    const std::vector<uint8_t> txt { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<uint8_t> outbuf(txt.size());
    std::vector<uint8_t> outbuf2(txt.size());

    rc4init(key.data(), key.size(), sbox.data());
    rc4run(txt.data(), txt.size(), outbuf.data(), sbox.data());

    std::cout << "Text: ";
    for (auto k: txt)
    {
        const size_t value { k };
        std::cout << value << ";";
    }
    std::cout << std::endl;

    std::cout << "Encrypted: ";
    for (auto e: outbuf)
    {
        const size_t value { e };
        std::cout << value << ";";
    }
    std::cout << std::endl;

    rc4init(key.data(), key.size(), sbox.data());
    rc4run(outbuf.data(), outbuf.size(), outbuf2.data(), sbox.data());

    std::cout << "Decrypted: ";
    for (auto d: outbuf2)
    {
        const size_t value { d };
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

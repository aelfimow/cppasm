#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" void fpuconst_fp32(float *p);
extern "C" void fpuconst_fp64(double *p);
extern "C" float fp32_zero(void);
extern "C" double fp64_zero(void);
extern "C" long double fp80_zero(void);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    float a[7U];
    double b[7U];

    fpuconst_fp32(a);
    fpuconst_fp64(b);

    for (auto aa: a)
    {
        std::cout << aa << "; ";
    }

    std::cout << std::endl;

    for (auto bb: b)
    {
        std::cout << bb << "; ";
    }

    std::cout << std::endl;

    std::cout << fp32_zero() << "; " << fp64_zero() << "; " << fp80_zero() << std::endl;

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

#include <iostream>
#include <cstdlib>
#include <stdexcept>

extern "C" void fpuconst_fp32(float *p);
extern "C" void fpuconst_fp64(double *p);
extern "C" void fp32_zero(float *p);
extern "C" void fp64_zero(double *p);
extern "C" void fp80_zero(long double *p);
extern "C" void fp32_one(float *p);
extern "C" void fp64_one(double *p);
extern "C" void fp80_one(long double *p);

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

    {
        float v1 { 1.0f };
        double v2 { 1.0 };
        long double v3 { 1.0 };

        std::cout << "Loading zero..." << std::endl;
        std::cout << "Before: " << v1 << "; " << v2 << "; " << v3 << std::endl;

        fp32_zero(&v1);
        fp64_zero(&v2);
        fp80_zero(&v3);

        std::cout << "After: " << v1 << "; " << v2 << "; " << v3 << std::endl;
    }

    {
        float v1 { 0.0f };
        double v2 { 0.0 };
        long double v3 { 0.0 };

        std::cout << "Loading one..." << std::endl;
        std::cout << "Before: " << v1 << "; " << v2 << "; " << v3 << std::endl;

        fp32_one(&v1);
        fp64_one(&v2);
        fp80_one(&v3);

        std::cout << "After: " << v1 << "; " << v2 << "; " << v3 << std::endl;
    }

    return EXIT_SUCCESS;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

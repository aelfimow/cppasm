#include <iostream>
#include <cstdlib>
#include <valarray>
#include <stdexcept>
#include <map>

extern "C" uint64_t rdtsc_func(void);

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    std::valarray<uint64_t> diffs(100);
    std::map<uint64_t, size_t> stat;

    for (auto it = std::begin(diffs); it != std::end(diffs); ++it)
    {
        auto t0 = rdtsc_func();
        auto t1 = rdtsc_func();

        if (t1 < t0)
        {
            throw std::logic_error("t1 < t0");
        }

        auto d = (t1 - t0);

        *it = d;

        if (auto stat_elem = stat.find(d); stat_elem != stat.end())
        {
            stat_elem->second += 1;
        }
        else
        {
            stat[d] = 1;
        }
    }

    std::cout << "Min.: " << diffs.min() << std::endl;
    std::cout << "Max.: " << diffs.max() << std::endl;

    for (auto stat_elem: stat)
    {
        std::cout << stat_elem.first << ": " << stat_elem.second << std::endl;
    }

    return EXIT_SUCCESS;
}
catch (std::logic_error &exc)
{
    std::cerr << "Error, exception: " << exc.what() << std::endl;
    return EXIT_FAILURE;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}

#ifdef MACH_EPS_H
#error Already included
#else
#define MACH_EPS_H

using fp32_t = float;

static_assert(sizeof(fp32_t) == 4);

template <typename T> struct fp_params
{
    T value;
    T epsilon;
    T sum;
};

using fp32_params = struct fp_params<fp32_t>;

static_assert(sizeof(fp32_params) == (3 * sizeof(fp32_t)));

extern "C" void macheps_fp32_init(void *param);
extern "C" void macheps_fp32_compute(void *param);

#endif

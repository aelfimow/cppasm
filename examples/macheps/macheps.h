#ifdef MACH_EPS_H
#error Already included
#else
#define MACH_EPS_H

using fp32_t = float;
using fp64_t = double;

static_assert(sizeof(fp32_t) == 4);
static_assert(sizeof(fp64_t) == 8);

template <typename T> struct fp_params
{
    T value;
    T epsilon;
    T sum;
};

using fp32_params = struct fp_params<fp32_t>;
using fp64_params = struct fp_params<fp64_t>;

static_assert(sizeof(fp32_params) == (3 * sizeof(fp32_t)));
static_assert(sizeof(fp64_params) == (3 * sizeof(fp64_t)));

extern "C" void macheps_fp32_init(void *param);
extern "C" void macheps_fp32_compute(void *param);

extern "C" void macheps_fp64_init(void *param);
extern "C" void macheps_fp64_compute(void *param);

#endif

#ifdef MACH_EPS_H
#error Already included
#else
#define MACH_EPS_H

using fp32_t = float;

struct fp32_params
{
    fp32_t value;
    fp32_t epsilon;
    fp32_t sum;
};

static_assert(sizeof(fp32_t) == 4);
static_assert(sizeof(struct fp32_params) == (3 * sizeof(fp32_t)));

extern "C" void macheps_fp32_init(void *param);
extern "C" void macheps_fp32_compute(void *param);

#endif

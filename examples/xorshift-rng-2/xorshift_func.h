#ifdef XORSHIFT_FUNC_H
#error Already included
#else
#define XORSHIFT_FUNC_H

extern "C" uint64_t xorshift_func(uint64_t triple, uint64_t rng_state);

#endif

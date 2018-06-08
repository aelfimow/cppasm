#ifdef XORSHIFT_FUNC_H
#error Already included
#else
#define XORSHIFT_FUNC_H

extern "C" uint64_t xorshift_func1(uint64_t triple, uint64_t rng_state);
extern "C" uint64_t xorshift_func2(uint64_t triple, uint64_t rng_state);
extern "C" uint64_t xorshift_func3(uint64_t triple, uint64_t rng_state);
extern "C" uint64_t xorshift_func4(uint64_t triple, uint64_t rng_state);

#endif

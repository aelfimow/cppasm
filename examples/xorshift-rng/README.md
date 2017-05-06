# 64-bit xorshift random number generator functions
This example demonstrates generation of assembly functions implementing
64-bit xorshift random number generator discovered by George Marsaglia and
described in his paper "Xorshift RNGs".

For 64-bit xorshift RNGs George Marsaglia proposed 275 triples, which are
used here as is to generate 275 functions.

The assembly output of the generator is in result directory.

The example application is using all generated functions and
performs basic sanity checks.

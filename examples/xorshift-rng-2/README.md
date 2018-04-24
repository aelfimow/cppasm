# 64-bit xorshift random number generator functions (second version)
This is a second example generating 
64-bit xorshift random number generator discovered by George Marsaglia and
described in his paper "Xorshift RNGs".

For 64-bit xorshift RNGs George Marsaglia proposed 275 triples.
The generated function is expecting a valid (packed as uint64) triple as argument.

The assembly output of the generator is in result directory.

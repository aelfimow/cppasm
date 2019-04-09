#ifdef DIV_ARITHM_H
#error Already included
#else
#define DIV_ARITHM_H

struct div_param
{
    size_t Z1;
    size_t Z2;
    size_t N;
    size_t div_result;
    size_t mod_result;
};

extern "C" void div_arithm(struct div_param *p);

#endif

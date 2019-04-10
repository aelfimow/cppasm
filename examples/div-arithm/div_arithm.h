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

    div_param() :
        Z1 { 0 },
        Z2 { 0 },
        N  { 0 },
        div_result { 0 },
        mod_result { 0 }
    {
    }

    ~div_param()
    {
    }

    div_param &with_Z1(size_t value)
    {
        Z1 = value;
        return *this;
    }

    div_param &with_Z2(size_t value)
    {
        Z2 = value;
        return *this;
    }

    div_param &with_N(size_t value)
    {
        N = value;
        return *this;
    }
};

extern "C" void div_arithm(struct div_param *p);

#endif

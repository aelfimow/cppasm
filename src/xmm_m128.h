#ifdef XMM_M128_H
#error Already included
#else
#define XMM_M128_H

class xmm_m128
{
    public:
        xmm_m128(asmstream &s, const std::string mnem);

        void operator()(xmm &op1, m128 &op2);

        virtual ~xmm_m128();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        xmm_m128() = delete;
        xmm_m128(const xmm_m128 &instance) = delete;
        xmm_m128(const xmm_m128 &&instance) = delete;
        xmm_m128 &operator=(const xmm_m128 &instance) = delete;
        xmm_m128 &operator=(const xmm_m128 &&instance) = delete;

};

#endif

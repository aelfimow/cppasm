#ifdef XMM_M32_H
#error Already included
#else
#define XMM_M32_H

class xmm_m32
{
    public:
        xmm_m32(asmstream &s, const std::string mnem);

        void operator()(xmm &op1, m32 &op2);

        virtual ~xmm_m32();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        xmm_m32() = delete;
        xmm_m32(const xmm_m32 &instance) = delete;
        xmm_m32(const xmm_m32 &&instance) = delete;
        xmm_m32 &operator=(const xmm_m32 &instance) = delete;
        xmm_m32 &operator=(const xmm_m32 &&instance) = delete;

};

#endif

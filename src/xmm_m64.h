#ifdef XMM_M64_H
#error Already included
#else
#define XMM_M64_H

class xmm_m64
{
    public:
        xmm_m64(asmstream &s, const std::string mnem);

        void operator()(xmm &op1, m64 &op2);

        virtual ~xmm_m64();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        xmm_m64() = delete;
        xmm_m64(const xmm_m64 &instance) = delete;
        xmm_m64(const xmm_m64 &&instance) = delete;
        xmm_m64 &operator=(const xmm_m64 &instance) = delete;
        xmm_m64 &operator=(const xmm_m64 &&instance) = delete;

};

#endif

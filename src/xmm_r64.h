#ifdef XMM_R64_H
#error Already included
#else
#define XMM_R64_H

class xmm_r64
{
    public:
        xmm_r64(asmstream &s, const std::string mnem);

        void operator()(xmm &op1, r64 &op2);

        virtual ~xmm_r64();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        xmm_r64() = delete;
        xmm_r64(const xmm_r64 &instance) = delete;
        xmm_r64(const xmm_r64 &&instance) = delete;
        xmm_r64 &operator=(const xmm_r64 &instance) = delete;
        xmm_r64 &operator=(const xmm_r64 &&instance) = delete;

};

#endif

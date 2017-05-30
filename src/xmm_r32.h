#ifdef XMM_R32_H
#error Already included
#else
#define XMM_R32_H

class xmm_r32
{
    public:
        xmm_r32(asmstream &s, const std::string mnem);

        void operator()(xmm &op1, r32 &op2);

        virtual ~xmm_r32();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        xmm_r32() = delete;
        xmm_r32(const xmm_r32 &instance) = delete;
        xmm_r32(const xmm_r32 &&instance) = delete;
        xmm_r32 &operator=(const xmm_r32 &instance) = delete;
        xmm_r32 &operator=(const xmm_r32 &&instance) = delete;

};

#endif

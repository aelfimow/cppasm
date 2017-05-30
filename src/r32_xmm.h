#ifdef R32_XMM_H
#error Already included
#else
#define R32_XMM_H

class r32_xmm
{
    public:
        r32_xmm(asmstream &s, const std::string mnem);

        void operator()(r32 &op1, xmm &op2);

        virtual ~r32_xmm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        r32_xmm() = delete;
        r32_xmm(const r32_xmm &instance) = delete;
        r32_xmm(const r32_xmm &&instance) = delete;
        r32_xmm &operator=(const r32_xmm &instance) = delete;
        r32_xmm &operator=(const r32_xmm &&instance) = delete;

};

#endif

#ifdef R64_XMM_H
#error Already included
#else
#define R64_XMM_H

class r64_xmm
{
    public:
        r64_xmm(asmstream &s, const std::string mnem);

        void operator()(r64 &op1, xmm &op2);

        virtual ~r64_xmm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        r64_xmm() = delete;
        r64_xmm(const r64_xmm &instance) = delete;
        r64_xmm(const r64_xmm &&instance) = delete;
        r64_xmm &operator=(const r64_xmm &instance) = delete;
        r64_xmm &operator=(const r64_xmm &&instance) = delete;

};

#endif

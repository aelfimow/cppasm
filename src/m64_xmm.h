#ifdef M64_XMM_H
#error Already included
#else
#define M64_XMM_H

class m64_xmm
{
    public:
        m64_xmm(asmstream &s, const std::string mnem);

        void operator()(m64 &op1, xmm &op2);

        virtual ~m64_xmm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        m64_xmm() = delete;
        m64_xmm(const m64_xmm &instance) = delete;
        m64_xmm(const m64_xmm &&instance) = delete;
        m64_xmm &operator=(const m64_xmm &instance) = delete;
        m64_xmm &operator=(const m64_xmm &&instance) = delete;

};

#endif

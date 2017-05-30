#ifdef M32_XMM_H
#error Already included
#else
#define M32_XMM_H

class m32_xmm
{
    public:
        m32_xmm(asmstream &s, const std::string mnem);

        void operator()(m32 &op1, xmm &op2);

        virtual ~m32_xmm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        m32_xmm() = delete;
        m32_xmm(const m32_xmm &instance) = delete;
        m32_xmm(const m32_xmm &&instance) = delete;
        m32_xmm &operator=(const m32_xmm &instance) = delete;
        m32_xmm &operator=(const m32_xmm &&instance) = delete;

};

#endif

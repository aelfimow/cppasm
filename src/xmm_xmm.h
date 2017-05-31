#ifdef XMM_XMM_H
#error Already included
#else
#define XMM_XMM_H

class xmm_xmm
{
    public:
        xmm_xmm(asmstream &s, const std::string mnem);

        void operator()(xmm &op1, xmm &op2);

        virtual ~xmm_xmm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        xmm_xmm() = delete;
        xmm_xmm(const xmm_xmm &instance) = delete;
        xmm_xmm(const xmm_xmm &&instance) = delete;
        xmm_xmm &operator=(const xmm_xmm &instance) = delete;
        xmm_xmm &operator=(const xmm_xmm &&instance) = delete;

};

#endif

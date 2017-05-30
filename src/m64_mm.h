#ifdef M64_MM_H
#error Already included
#else
#define M64_MM_H

class m64_mm
{
    public:
        m64_mm(asmstream &s, const std::string mnem);

        void operator()(mm &op1, m64 &op2);

        virtual ~m64_mm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        m64_mm() = delete;
        m64_mm(const m64_mm &instance) = delete;
        m64_mm(const m64_mm &&instance) = delete;
        m64_mm &operator=(const m64_mm &instance) = delete;
        m64_mm &operator=(const m64_mm &&instance) = delete;

};

#endif

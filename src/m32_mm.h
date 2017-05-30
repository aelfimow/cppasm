#ifdef M32_MM_H
#error Already included
#else
#define M32_MM_H

class m32_mm
{
    public:
        m32_mm(asmstream &s, const std::string mnem);

        void operator()(mm &op1, m32 &op2);

        virtual ~m32_mm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        m32_mm() = delete;
        m32_mm(const m32_mm &instance) = delete;
        m32_mm(const m32_mm &&instance) = delete;
        m32_mm &operator=(const m32_mm &instance) = delete;
        m32_mm &operator=(const m32_mm &&instance) = delete;

};

#endif

#ifdef R32_MM_H
#error Already included
#else
#define R32_MM_H

class r32_mm
{
    public:
        r32_mm(asmstream &s, const std::string mnem);

        void operator()(r32 &op1, mm &op2);

        virtual ~r32_mm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        r32_mm() = delete;
        r32_mm(const r32_mm &instance) = delete;
        r32_mm(const r32_mm &&instance) = delete;
        r32_mm &operator=(const r32_mm &instance) = delete;
        r32_mm &operator=(const r32_mm &&instance) = delete;

};

#endif

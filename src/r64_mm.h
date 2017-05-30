#ifdef R64_MM_H
#error Already included
#else
#define R64_MM_H

class r64_mm
{
    public:
        r64_mm(asmstream &s, const std::string mnem);

        void operator()(mm &op1, r64 &op2);

        virtual ~r64_mm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        r64_mm() = delete;
        r64_mm(const r64_mm &instance) = delete;
        r64_mm(const r64_mm &&instance) = delete;
        r64_mm &operator=(const r64_mm &instance) = delete;
        r64_mm &operator=(const r64_mm &&instance) = delete;

};

#endif

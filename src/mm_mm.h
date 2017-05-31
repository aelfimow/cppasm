#ifdef MM_MM_H
#error Already included
#else
#define MM_MM_H

class mm_mm
{
    public:
        mm_mm(asmstream &s, const std::string mnem);

        void operator()(mm &op1, mm &op2);

        virtual ~mm_mm();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        mm_mm() = delete;
        mm_mm(const mm_mm &instance) = delete;
        mm_mm(const mm_mm &&instance) = delete;
        mm_mm &operator=(const mm_mm &instance) = delete;
        mm_mm &operator=(const mm_mm &&instance) = delete;

};

#endif

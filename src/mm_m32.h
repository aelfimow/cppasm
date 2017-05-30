#ifdef MM_M32_H
#error Already included
#else
#define MM_M32_H

class mm_m32
{
    public:
        mm_m32(asmstream &s, const std::string mnem);

        void operator()(mm &op1, m32 &op2);

        virtual ~mm_m32();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        mm_m32() = delete;
        mm_m32(const mm_m32 &instance) = delete;
        mm_m32(const mm_m32 &&instance) = delete;
        mm_m32 &operator=(const mm_m32 &instance) = delete;
        mm_m32 &operator=(const mm_m32 &&instance) = delete;

};

#endif

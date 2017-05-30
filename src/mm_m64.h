#ifdef MM_M64_H
#error Already included
#else
#define MM_M64_H

class mm_m64
{
    public:
        mm_m64(asmstream &s, const std::string mnem);

        void operator()(mm &op1, m64 &op2);

        virtual ~mm_m64();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        mm_m64() = delete;
        mm_m64(const mm_m64 &instance) = delete;
        mm_m64(const mm_m64 &&instance) = delete;
        mm_m64 &operator=(const mm_m64 &instance) = delete;
        mm_m64 &operator=(const mm_m64 &&instance) = delete;

};

#endif

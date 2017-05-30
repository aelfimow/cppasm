#ifdef MM_R64_H
#error Already included
#else
#define MM_R64_H

class mm_r64
{
    public:
        mm_r64(asmstream &s, const std::string mnem);

        void operator()(mm &op1, r64 &op2);

        virtual ~mm_r64();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        mm_r64() = delete;
        mm_r64(const mm_r64 &instance) = delete;
        mm_r64(const mm_r64 &&instance) = delete;
        mm_r64 &operator=(const mm_r64 &instance) = delete;
        mm_r64 &operator=(const mm_r64 &&instance) = delete;

};

#endif

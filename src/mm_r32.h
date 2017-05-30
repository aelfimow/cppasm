#ifdef MM_R32_H
#error Already included
#else
#define MM_R32_H

class mm_r32
{
    public:
        mm_r32(asmstream &s, const std::string mnem);

        void operator()(mm &op1, r32 &op2);

        virtual ~mm_r32();

    private:
        asmstream &m_asmout;
        const std::string m_mnem;

    public:
        mm_r32() = delete;
        mm_r32(const mm_r32 &instance) = delete;
        mm_r32(const mm_r32 &&instance) = delete;
        mm_r32 &operator=(const mm_r32 &instance) = delete;
        mm_r32 &operator=(const mm_r32 &&instance) = delete;

};

#endif

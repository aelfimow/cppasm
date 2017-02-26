#ifdef IMM64_H
#error Already included
#else
#define IMM64_H

class imm64
{
    public:
        explicit imm64(uint64_t value);

        imm64() = delete;
        imm64(const imm64 &instance) = delete;
        imm64(const imm64 &&instance) = delete;
        imm64 &operator=(const imm64 &instance) = delete;
        imm64 &operator=(const imm64 &&instance) = delete;

        ~imm64();

        std::string to_str() const;

    private:
        const uint64_t m_value;
};

#endif

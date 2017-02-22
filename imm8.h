#ifdef IMM8_H
#error Already included
#else
#define IMM8_H

class imm8
{
    public:
        explicit imm8(uint8_t value);

        imm8() = delete;
        imm8(const imm8 &instance) = delete;
        imm8(const imm8 &&instance) = delete;
        imm8 &operator=(const imm8 &instance) = delete;
        imm8 &operator=(const imm8 &&instance) = delete;

        ~imm8();

        std::string to_str() const;

    private:
        const uint8_t m_value;
};

#endif

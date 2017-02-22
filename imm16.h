#ifdef IMM16_H
#error Already included
#else
#define IMM16_H

class imm16
{
    public:
        explicit imm16(uint16_t value);

        imm16() = delete;
        imm16(const imm16 &instance) = delete;
        imm16(const imm16 &&instance) = delete;
        imm16 &operator=(const imm16 &instance) = delete;
        imm16 &operator=(const imm16 &&instance) = delete;

        ~imm16();

        std::string to_str() const;

    private:
        const uint16_t m_value;
};

#endif

#ifdef IMM32_H
#error Already included
#else
#define IMM32_H

class imm32
{
    public:
        explicit imm32(uint32_t value);

        imm32() = delete;
        imm32(const imm32 &instance) = delete;
        imm32(const imm32 &&instance) = delete;
        imm32 &operator=(const imm32 &instance) = delete;
        imm32 &operator=(const imm32 &&instance) = delete;

        ~imm32();

        std::string to_str() const;

    private:
        const uint32_t m_value;
};

#endif

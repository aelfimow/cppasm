#ifdef DISP8_H
#error Already included
#else
#define DISP8_H

class disp8
{
    public:
        explicit disp8(uint8_t value);

        disp8() = delete;
        disp8(const disp8 &instance) = delete;
        disp8(const disp8 &&instance) = delete;
        disp8 &operator=(const disp8 &instance) = delete;
        disp8 &operator=(const disp8 &&instance) = delete;

        ~disp8();

        std::string to_str() const;

    private:
        const uint8_t m_value;
};

#endif

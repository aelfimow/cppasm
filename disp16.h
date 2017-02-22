#ifdef DISP16_H
#error Already included
#else
#define DISP16_H

class disp16
{
    public:
        explicit disp16(uint16_t value);

        disp16() = delete;
        disp16(const disp16 &instance) = delete;
        disp16(const disp16 &&instance) = delete;
        disp16 &operator=(const disp16 &instance) = delete;
        disp16 &operator=(const disp16 &&instance) = delete;

        ~disp16();

        std::string to_str() const;

    private:
        const uint16_t m_value;
};

#endif

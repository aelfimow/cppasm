#ifdef DISP32_H
#error Already included
#else
#define DISP32_H

class disp32
{
    public:
        explicit disp32(uint32_t value);

        disp32() = delete;
        disp32(const disp32 &instance) = delete;
        disp32(const disp32 &&instance) = delete;
        disp32 &operator=(const disp32 &instance) = delete;
        disp32 &operator=(const disp32 &&instance) = delete;

        ~disp32();

        std::string to_str() const;

    private:
        const uint32_t m_value;
};

#endif

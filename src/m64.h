#ifdef M64_H
#error Already included
#else
#define M64_H

class m64 : public m
{
    public:
        explicit m64(const reg &base);
        explicit m64(const reg &base, const reg &index);
        explicit m64(const reg &base, const reg &index, size_t scale);

        m64() = delete;
        m64(const m64 &instance) = delete;
        m64(const m64 &&instance) = delete;
        m64 &operator=(const m64 &instance) = delete;
        m64 &operator=(const m64 &&instance) = delete;

        ~m64();

        std::string to_str() const override;
        std::string postfix() const override;

    private:
        std::string m_str;
};

#endif

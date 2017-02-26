#ifdef M32_H
#error Already included
#else
#define M32_H

class m32 : public m
{
    public:
        explicit m32(const reg &base, const reg &index);
        explicit m32(const reg &base, const reg &index, size_t scale);

        m32() = delete;
        m32(const m32 &instance) = delete;
        m32(const m32 &&instance) = delete;
        m32 &operator=(const m32 &instance) = delete;
        m32 &operator=(const m32 &&instance) = delete;

        ~m32();

        std::string to_str() const override;
        std::string postfix() const override;

    private:
        std::string m_str;
};

#endif

#ifdef M8_H
#error Already included
#else
#define M8_H

class m8 : public m
{
    public:
        explicit m8(const reg &base);
        explicit m8(const reg &base, const reg &index);
        explicit m8(const reg &base, const reg &index, size_t scale);

        m8() = delete;
        m8(const m8 &instance) = delete;
        m8(const m8 &&instance) = delete;
        m8 &operator=(const m8 &instance) = delete;
        m8 &operator=(const m8 &&instance) = delete;

        ~m8();

        std::string to_str() const override;
        std::string postfix() const override;

    private:
        std::string m_str;
};

#endif

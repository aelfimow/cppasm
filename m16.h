#ifdef M16_H
#error Already included
#else
#define M16_H

class m16 : public m
{
    public:
        explicit m16(const reg &base, const reg &index);
        explicit m16(const reg &base, const reg &index, size_t scale);

        m16() = delete;
        m16(const m16 &instance) = delete;
        m16(const m16 &&instance) = delete;
        m16 &operator=(const m16 &instance) = delete;
        m16 &operator=(const m16 &&instance) = delete;

        ~m16();

        std::string to_str() const override;
        std::string postfix() const override;

    private:
        std::string m_str;
};

#endif

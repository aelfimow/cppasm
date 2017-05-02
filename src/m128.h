#ifdef M128_H
#error Already included
#else
#define M128_H

class m128 : public m
{
    public:
        explicit m128(const reg &base);
        explicit m128(const reg &base, const reg &index);
        explicit m128(const reg &base, const reg &index, size_t scale);

        m128() = delete;
        m128(const m128 &instance) = delete;
        m128(const m128 &&instance) = delete;
        m128 &operator=(const m128 &instance) = delete;
        m128 &operator=(const m128 &&instance) = delete;

        ~m128();

        std::string to_str() const override;
        std::string postfix() const override;

    private:
        std::string m_str;
};

#endif

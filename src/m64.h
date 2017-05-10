#ifdef M64_H
#error Already included
#else
#define M64_H

class m64 : public m
{
    public:
        m64();
        explicit m64(const reg &base);
        explicit m64(const reg &base, const reg &index);
        explicit m64(const reg &base, const reg &index, size_t scale);

        m64(const m64 &instance) = delete;
        m64(const m64 &&instance) = delete;
        m64 &operator=(const m64 &instance) = delete;
        m64 &operator=(const m64 &&instance) = delete;

        ~m64();

        m64 &base(const reg &b);
        m64 &index(const reg &i);
        m64 &scale(size_t value);
        m64 &disp(size_t value);

        std::string to_str() const override;
        std::string postfix() const override;

    private:
        std::string m_base;
        std::string m_index;
        std::string m_scale;
        std::string m_disp;
};

#endif

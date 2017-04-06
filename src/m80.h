#ifdef M80_H
#error Already included
#else
#define M80_H

class m80 : public m
{
    public:
        explicit m80(const reg &base);
        explicit m80(const reg &base, const reg &index);
        explicit m80(const reg &base, const reg &index, size_t scale);

        m80() = delete;
        m80(const m80 &instance) = delete;
        m80(const m80 &&instance) = delete;
        m80 &operator=(const m80 &instance) = delete;
        m80 &operator=(const m80 &&instance) = delete;

        ~m80();

        std::string to_str() const override;
        std::string postfix() const override;

    private:
        std::string m_str;
};

#endif

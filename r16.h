#ifdef R16_H
#error Already included
#else
#define R16_H

class r16 : public reg
{
    public:
        explicit r16(const std::string &name);

        r16() = delete;
        r16(const r16 &instance) = delete;
        r16(const r16 &&instance) = delete;
        r16 &operator=(const r16 &instance) = delete;
        r16 &operator=(const r16 &&instance) = delete;

        ~r16();

        std::string name() const override;

    private:
        const std::string m_name;
};

#endif

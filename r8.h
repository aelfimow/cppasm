#ifdef R8_H
#error Already included
#else
#define R8_H

class r8 : public reg
{
    public:
        explicit r8(const std::string &name);

        r8() = delete;
        r8(const r8 &instance) = delete;
        r8(const r8 &&instance) = delete;
        r8 &operator=(const r8 &instance) = delete;
        r8 &operator=(const r8 &&instance) = delete;

        ~r8();

        std::string name() const override;

    private:
        const std::string m_name;
};

#endif

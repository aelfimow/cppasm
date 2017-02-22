#ifdef R64_H
#error Already included
#else
#define R64_H

class r64 : public reg
{
    public:
        explicit r64(const std::string &name);

        r64() = delete;
        r64(const r64 &instance) = delete;
        r64(const r64 &&instance) = delete;
        r64 &operator=(const r64 &instance) = delete;
        r64 &operator=(const r64 &&instance) = delete;

        ~r64();

        std::string name() const override;

    private:
        const std::string m_name;
};

#endif

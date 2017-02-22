#ifdef R32_H
#error Already included
#else
#define R32_H

class r32 : public reg
{
    public:
        explicit r32(const std::string &name);

        r32() = delete;
        r32(const r32 &instance) = delete;
        r32(const r32 &&instance) = delete;
        r32 &operator=(const r32 &instance) = delete;
        r32 &operator=(const r32 &&instance) = delete;

        ~r32();

        std::string name() const override;

    private:
        const std::string m_name;
};

#endif

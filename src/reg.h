#ifdef REG_H
#error Already included
#else
#define REG_H

class reg
{
    public:
        reg() { }
        reg(const reg &instance) = delete;
        reg(const reg &&instance) = delete;
        reg &operator=(const reg &instance) = delete;
        reg &operator=(const reg &&instance) = delete;

        virtual ~reg() { }

        virtual std::string name() const = 0;
};

#endif

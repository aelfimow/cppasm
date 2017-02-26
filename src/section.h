#ifdef SECTION_H
#error Already included
#else
#define SECTION_H

class section
{
    public:
        explicit section(const std::string &name);

        section() = delete;
        section(const section &instance) = delete;
        section(const section &&instance) = delete;
        section &operator=(const section &instance) = delete;
        section &operator=(const section &&instance) = delete;

        ~section();

        void start();

    private:
        const std::string m_name;
};

#endif

/*! \file section.h
    \brief Class for assembler section keyword.
*/
#ifdef SECTION_H
#error Already included
#else
#define SECTION_H

class section
{
    public:
        explicit section(const std::string &name);
        ~section();

        void start();

    private:
        const std::string m_name;

    public:
        section() = delete;
        section(const section &instance) = delete;
        section(const section &&instance) = delete;
        section &operator=(const section &instance) = delete;
        section &operator=(const section &&instance) = delete;
};

#endif

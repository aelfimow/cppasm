/*! \file streamdest_cout.h
    \brief Class for Assembly Stream destination std::cout.
*/
#ifdef STREAM_DEST_COUT_H
#error Already included
#else
#define STREAM_DEST_COUT_H

/*! \class Assembly stream destination std::cout */
class streamdest_cout: public streamdest
{
    public:
        streamdest_cout();
        ~streamdest_cout();

        void space() override;
        void indent() override;
        void write(const std::string &str) override;
        void writeln(const std::string &str) override;

    public:
        streamdest_cout(const streamdest_cout &instance) = delete;
        streamdest_cout(const streamdest_cout &&instance) = delete;
        streamdest_cout &operator=(const streamdest_cout &instance) = delete;
        streamdest_cout &operator=(const streamdest_cout &&instance) = delete;
};

#endif

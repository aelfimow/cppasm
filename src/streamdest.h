/*! \file streamdest.h
    \brief Class for Assembly Stream destination.
*/
#ifdef STREAM_DEST_H
#error Already included
#else
#define STREAM_DEST_H

/*! \class Assembly stream destination */
class streamdest
{
    public:
        streamdest() { }
        virtual ~streamdest() { }

        virtual void space() = 0;
        virtual void indent() = 0;
        virtual void write(const std::string &str) = 0;
        virtual void writeln(const std::string &str) = 0;

    public:
        streamdest(const streamdest &instance) = delete;
        streamdest(const streamdest &&instance) = delete;
        streamdest &operator=(const streamdest &instance) = delete;
        streamdest &operator=(const streamdest &&instance) = delete;
};

#endif

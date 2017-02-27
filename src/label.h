#ifdef LABEL_H
#error Already included
#else
#define LABEL_H

class label
{
    public:
        label();

        label(const label &instance) = delete;
        label(const label &&instance) = delete;
        label &operator=(const label &instance) = delete;
        label &operator=(const label &&instance) = delete;

        void operator()(const std::string &name);

        ~label();
};

#endif

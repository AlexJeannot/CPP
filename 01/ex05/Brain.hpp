#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        unsigned int m_weight;

    public:
        Brain(void);
        std::string identify() const;
};

#endif
#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
    public:
        /* Constructors and destructor */
        Peon(std::string name = "Gretel");
        Peon(const Peon & obj);
        ~Peon();

        /* Operator overloads */
        Peon & operator=(const Peon & obj);

        /* member functions */
        void getPolymorphed() const;
};

#endif
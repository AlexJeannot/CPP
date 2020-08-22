#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon 
{
    public:
        /* Constructors and destructors */
        PowerFist();
        PowerFist(const PowerFist & other);
        ~PowerFist();

        /* Operators overloads */
        PowerFist & operator=(const PowerFist & other);

        /* Other member functions */
        void attack() const;
};

#endif
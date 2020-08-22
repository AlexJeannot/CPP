#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon 
{
    public:
        /* Constructors and destructors */
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle & other);
        ~PlasmaRifle();

        /* Operators overloads */
        PlasmaRifle & operator=(const PlasmaRifle & other);

        /* Other member functions */
        void attack() const;
};

#endif
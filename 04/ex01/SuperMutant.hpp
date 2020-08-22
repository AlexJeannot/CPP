#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        /* Constructors and destructors */
        SuperMutant();
        SuperMutant(const SuperMutant & other);
        ~SuperMutant();

        /* Operators overloads */
        SuperMutant & operator=(const SuperMutant & other);

        /* Other member functions */
        void takeDamage(int damage);
};

#endif
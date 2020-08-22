#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        /* Constructors and destructors */
        RadScorpion();
        RadScorpion(const RadScorpion & other);
        ~RadScorpion();

        /* Operators overloads */
        RadScorpion & operator=(const RadScorpion & other);

        /* Other member functions */
        void takeDamage(int damage);
};

#endif
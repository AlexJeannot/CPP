#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "Zombie.hpp"

class ZombieHorde
{
    private:
        Zombie * m_hordeList;
        unsigned int m_hordeSize;

    public:
        // Constructor
        ZombieHorde(void);
        ZombieHorde(unsigned int n);
        std::string RandomName(void) const;
        std::string RandomType(void) const;

        // Display
        void announceHorde(void) const;
        unsigned int getHordeSize(void) const;
};

#endif
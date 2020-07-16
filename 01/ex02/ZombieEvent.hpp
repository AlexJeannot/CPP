#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string m_type;
    
    public:
        // Constructor
        ZombieEvent(void);

        void setZombieType(std::string p_type);
        Zombie * newZombie (std::string name);
        Zombie * randomChump(void);
};

#endif
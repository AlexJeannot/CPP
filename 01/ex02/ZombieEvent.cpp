#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : m_type("Default type")
{

}

void ZombieEvent::setZombieType(std::string p_type)
{
    m_type = p_type;
}

Zombie * ZombieEvent::newZombie (std::string name)
{
    return (new Zombie(name, m_type));
}

Zombie * ZombieEvent::randomChump(void)
{
    std::string randomNameList[6] = {  "Bobbie", "Irene", "Joshua", 
                                    "Francisca", "Anthony", "Megan" };

    return (new Zombie(randomNameList[(rand() % 6)], m_type));
}
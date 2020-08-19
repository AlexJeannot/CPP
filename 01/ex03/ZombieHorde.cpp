#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void)
{
    unsigned int count;
    unsigned int randomNumber;

    srand(time(NULL));
    randomNumber = std::rand() % 10 + 10;
    m_hordeList = new Zombie[randomNumber];
    for (count = 0; count < randomNumber; count++)
    {
        m_hordeList[count].setName(this->RandomName());
        m_hordeList[count].setType(this->RandomType());
    }
    m_hordeSize = randomNumber;
}

ZombieHorde::ZombieHorde(unsigned int n)
{
    unsigned int count;
    
    srand(time(NULL));
    m_hordeList = new Zombie[n];
    for (count = 0; count < n; count++)
    {
        m_hordeList[count].setName(this->RandomName());
        m_hordeList[count].setType(this->RandomType());
    }
    m_hordeSize = n;
}

std::string ZombieHorde::RandomName(void) const
{
    std::string randomNameList[15] = {  "Bobbie", "Irene", "Joshua", 
                                        "Francisca", "Anthony", "Megan",
                                        "Rick", "Sarah", "Meredith", 
                                        "Edwin", "Kim", "Glen", 
                                        "Jimmy", "Francis", "Donald"    };
    
    return (randomNameList[(std::rand() % 15)]);
}

std::string ZombieHorde::RandomType(void) const
{
    std::string randomNameList[3] = {"Skinny", "Regular", "Fat"};
    
    return (randomNameList[(std::rand() % 3)]);
}

void ZombieHorde::announceHorde(void) const
{
    unsigned int count;

    for (count = 0; count < m_hordeSize; count++)
    {
        m_hordeList[count].announce();
    }
}

unsigned int ZombieHorde::getHordeSize(void) const
{
    return (m_hordeSize);
}
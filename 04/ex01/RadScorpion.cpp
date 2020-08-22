#include "RadScorpion.hpp"

/* Constructors and destructors */

RadScorpion::RadScorpion() :
Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & other) : 
Enemy(other)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}


/* Operators overloads */

RadScorpion & RadScorpion::operator=(const RadScorpion & other)
{
    if (this != &other)
    {
        this->setType(other.getType());
        this->setHP(other.getHP());
    }
    return (*this);
}


/* Other member functions */

void RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
}
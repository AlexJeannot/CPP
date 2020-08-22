#include "PowerFist.hpp"

/* Constructors and destructors */

PowerFist::PowerFist() :
AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(const PowerFist & other) :
AWeapon(other)
{

}

PowerFist::~PowerFist()
{

}


/* Operators overloads */

PowerFist & PowerFist::operator=(const PowerFist & other)
{
    if (this != &other)
    {
        this->setName(other.getName());
        this->setAPCost(other.getAPCost());
        this->setDamage(other.getDamage());
    }
    return (*this);
}


/* Other member functions */

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}
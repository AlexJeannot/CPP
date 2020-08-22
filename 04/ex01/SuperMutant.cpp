#include "SuperMutant.hpp"

/* Constructors and destructors */

SuperMutant::SuperMutant() :
Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & other) : 
Enemy(other)
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}


/* Operators overloads */

SuperMutant & SuperMutant::operator=(const SuperMutant & other)
{
    if (this != &other)
    {
        this->setType(other.getType());
        this->setHP(other.getHP());
    }
    return (*this);
}


/* Other member functions */

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}
#include "PlasmaRifle.hpp"

/* Constructors and destructors */

PlasmaRifle::PlasmaRifle() :
AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & other) :
AWeapon(other)
{

}

PlasmaRifle::~PlasmaRifle()
{

}


/* Operators overloads */

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle & other)
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

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
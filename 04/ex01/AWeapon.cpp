#include "AWeapon.hpp"

/* Constructors and destructors */

AWeapon::AWeapon() : 
_name("Default weapon name"), _apcost(0), _damage(0)
{

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
_name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::AWeapon(const AWeapon & other) : 
_name(other._name), _apcost(other._apcost), _damage(other._damage)
{

}

AWeapon::~AWeapon()
{

}


/* Operators overloads */

AWeapon & AWeapon::operator=(const AWeapon & other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_apcost = other._apcost;
        this->_damage = other._damage;
    }
    return (*this);
}


/* Other member functions */

std::string const AWeapon::getName() const
{
    return (this->_name);
}

int AWeapon::getAPCost() const
{
    return (this->_apcost);
}

int AWeapon::getDamage() const
{
    return (this->_damage);
}

void AWeapon::setName(std::string name)
{
    this->_name = name;
}

void AWeapon::setAPCost(int apcost)
{
    this->_apcost = apcost;
}

void AWeapon::setDamage(int damage)
{
    this->_damage = damage;
}
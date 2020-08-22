#include "Character.hpp"

/* Constructors and destructors */

Character::Character() :
_name("Default character name"), _weapon(nullptr), _ap(40)
{

}

Character::Character(std::string const & name) : 
_name(name), _weapon(nullptr), _ap(40)
{

}

Character::Character(const Character & other) : 
_name(other._name), _weapon(other._weapon), _ap(other._ap)
{

}

Character::~Character()
{

}


/* Operators overloads */

Character & Character::operator=(const Character & other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_weapon = other._weapon;
        this->_ap = other._ap;
    }
    return (*this);
}


/* Other member functions */

void Character::recoverAP()
{
    if (this->_ap < 40)
        this->_ap += 10;
}

void Character::equip(AWeapon* weapon)
{
    if (weapon)
        this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
    if (this->_ap < this->_weapon->getAPCost())
    {
        std::cout << this->_name << " has no AP!" << std::endl;
    }
    else if (enemy)
    {
        std::cout << this->_name << " attaque " << enemy->getType() << " with a ";
        if (this->_weapon)
        {
            std::cout << " with a " << this->_weapon->getName() << std::endl;
            this->_weapon->attack();
            this->_ap -= this->_weapon->getAPCost();
            enemy->takeDamage(this->_weapon->getDamage());
        }
        else
            std::cout << " with its hands" << std::endl;
    }
}

std::string const Character::getName() const
{
    return (this->_name);
}

int Character::getAP() const
{
    return (this->_ap);
}

std::string const Character::getWeaponName() const
{
    if (this->_weapon)
        return (this->_weapon->getName());
    return ("no weapon equiped");
}

bool Character::hasWeapon() const
{
    if (this->_weapon)
        return true;
    return false;
}

/* Helper functions */

std::ostream & operator<<(std::ostream & output, const Character & obj)
{
    output << obj.getName() << " has " << obj.getAP();
    if (obj.hasWeapon())
        output << " and carries a " << obj.getWeaponName();
    else
        output << " and is unarmed";
    output << std::endl;
    return (output);
}
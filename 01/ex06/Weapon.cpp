#include "Weapon.hpp"

Weapon::Weapon(void)
{
    type = "Default type";
}

Weapon::Weapon(std::string p_type)
{
    type = p_type;
}

const std::string & Weapon::getType(void) const
{
    return (type);
}

void Weapon::setType(std::string newType)
{
    type = newType;
}
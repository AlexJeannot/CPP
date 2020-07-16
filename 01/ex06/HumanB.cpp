#include "HumanB.hpp"

HumanB::HumanB(void)
{
    name = "Default name";
}

HumanB::HumanB(std::string p_name)
{
    name = p_name;
}

void HumanB::setWeapon(Weapon & p_weapon)
{
    weapon = &p_weapon;
}

void HumanB::attack(void) const
{
    std::cout << name << " attack with his " << weapon->getType() << std::endl;
}
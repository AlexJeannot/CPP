#include "HumanA.hpp"

HumanA::HumanA(std::string p_name, Weapon & p_weapon) : weapon(p_weapon)
{
    name = p_name;
}

void HumanA::attack(void) const
{
    std::cout << name << " attack with his " << weapon.getType() << std::endl;
}
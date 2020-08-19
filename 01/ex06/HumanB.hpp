#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon * weapon;
    
    public:
        HumanB(void);
        HumanB(std::string p_name);
        void setWeapon(Weapon & p_weapon);
        void attack(void) const;
};

#endif
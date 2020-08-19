#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon & weapon;

    public:
        HumanA(std::string p_name, Weapon & p_weapon);
        void attack(void) const;

};

#endif
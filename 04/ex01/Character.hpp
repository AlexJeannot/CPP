#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        std::string _name;
        AWeapon * _weapon;
        int _ap;

    public:
        /* Constructors and destructors */
        Character();
        Character(std::string const & name);
        Character(const Character & other);
        virtual ~Character();

        /* Operators overloads */
        Character & operator=(const Character & other);

        /* Other member functions */
        void recoverAP();
        void equip(AWeapon* weapon);
        void attack(Enemy* enemy);
        std::string const getName() const;
        int getAP() const;
        std::string const getWeaponName() const;
        bool hasWeapon() const;
};

/* Helper functions */
std::ostream & operator<<(std::ostream & output, const Character & obj);

#endif
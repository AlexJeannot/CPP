#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
    private:
        std::string _name;
        int _apcost;
        int _damage;
    public:
        /* Constructors and destructors */
        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(const AWeapon & other);
        virtual ~AWeapon();

        /* Operators overloads */
        AWeapon & operator=(const AWeapon & other);

        /* Other member functions */
        std::string const getName() const;
        int getAPCost() const;
        int getDamage() const;
        void setName(std::string name);
        void setAPCost(int apcost);
        void setDamage(int damage);
        virtual void attack() const = 0;
};

#endif
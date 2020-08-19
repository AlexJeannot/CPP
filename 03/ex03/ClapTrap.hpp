#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        // Constructor & destructor
        ClapTrap(std::string p_name = "Default name");
        ~ClapTrap(void);

        // Change instance values
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void consumeEnergy(unsigned int amount);
        void refillEnergy(unsigned int amount);

        // Display attribut
        void displayHitPoints(void);
        void displayEnergyPoints(void);

        // Get attribut
        unsigned int getHitPoints(void);
        unsigned int getMaxHitPoints(void);
        unsigned int getEnergyPoints(void);
        unsigned int getMaxEnergyPoints(void);
        unsigned int getLevel(void);
        std::string getName(void);
        unsigned int getMeleeAttackDamage(void);
        unsigned int getRangedAttackDamage(void);
        unsigned int getArmorDamageReduction(void);

        // Set attribut
        void setHitPoints(unsigned int pHP);
        void setMaxHitPoints(unsigned int pMaxHP);
        void setEnergyPoints(unsigned int pEP);
        void setMaxEnergyPoints(unsigned int pMaxEP);
        void setLevel(unsigned int pLevel);
        void setName(std::string pName);
        void setMeleeAttackDamage(unsigned int pMeleeAttackDamage);
        void setRangedAttackDamage(unsigned int pRangedAttackDamage);
        void setArmorDamageReduction(unsigned int pArmorDamageReduction);

    private:
        unsigned int hitPoints;
        unsigned int maxHitPoints;
        unsigned int energyPoints;
        unsigned int maxEnergyPoints;
        unsigned int level;
        std::string name;
        unsigned int meleeAttackDamage;
        unsigned int rangedAttackDamage;
        unsigned int armorDamageReduction;
};

#endif
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap 
{
    public:
        // Constructor & destructor
        FragTrap(std::string p_name = "Default name");
        ~FragTrap(void);

        // Display attacks
        void introduceAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);

        // Change instance values
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //Random attacks
        void vaulthunter_dot_exe(std::string const & target);
        void pickRandomAttack(void);
        void frisbeeAttack(void);
        void trampolineAttack(void);
        void sparklingWaterAttack(void);
        void slackAttack(void);
        void readBookAttack(void);

        // Display attribut
        void displayHitPoints(void);
        void displayEnergyPoints(void);

        // Get attribut
        unsigned int getMaxEnergyPoints(void);
        unsigned int getLevel(void);

    private:
        unsigned int hitPoints;
        const unsigned int maxHitPoints;
        unsigned int energyPoints;
        unsigned int maxEnergyPoints;
        unsigned int level;
        std::string name;
        unsigned int meleeAttackDamage;
        unsigned int rangedAttackDamage;
        unsigned int armorDamageReduction;
};

#endif
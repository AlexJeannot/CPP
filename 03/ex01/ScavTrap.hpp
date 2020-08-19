#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
    public:
        // Constructor & destructor
        ScavTrap(std::string p_name = "Default name");
        ~ScavTrap(void);

        // Display attacks
        void introduceAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);

        // Change instance values
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //Challenge
        void challengeNewcomer(std::string const & target);
        void pickRandomChallenge(void);
        void mathChallenge(void);
        void orthographChallenge(void);
        void runChallenge(void);
        void thumbWreslteChallenge(void);
        void poleChallenge(void);

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
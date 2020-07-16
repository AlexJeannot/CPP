#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        // Constructor & destructor
        ScavTrap(std::string p_name = "Default name");
        ~ScavTrap(void);

        // Display attacks
        void introduceAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        
        //Challenge
        void challengeNewcomer(std::string const & target);
        void pickRandomChallenge(void);
        void mathChallenge(void);
        void orthographChallenge(void);
        void runChallenge(void);
        void thumbWreslteChallenge(void);
        void poleChallenge(void);
    
    private:
        ScavTrap();
};

#endif
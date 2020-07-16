#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        // Constructor & destructor
        NinjaTrap(std::string p_name = "Default name");
        ~NinjaTrap(void);

        // Display attacks
        void introduceAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);

        // Special skill
        void ninjaShoebox(ClapTrap & clapTrap);
        void ninjaShoebox(FragTrap & fragTrap);
        void ninjaShoebox(ScavTrap & scavTrap);
        void ninjaShoebox(NinjaTrap & ninjaTrap);
};

#endif
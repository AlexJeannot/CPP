#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        // Constructor & destructor
        FragTrap(std::string p_name = "Default name");
        ~FragTrap(void);

        // Display attacks
        void introduceAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);

        //Random attacks
        void vaulthunter_dot_exe(std::string const & target);
        void pickRandomAttack(void);
        void frisbeeAttack(void);
        void trampolineAttack(void);
        void sparklingWaterAttack(void);
        void slackAttack(void);
        void readBookAttack(void);
};

#endif
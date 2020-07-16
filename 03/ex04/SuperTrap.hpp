#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
    public:
        SuperTrap(std::string p_name = "Default name");
        ~SuperTrap();

        void introduceAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);

    private:
        SuperTrap();
};

#endif
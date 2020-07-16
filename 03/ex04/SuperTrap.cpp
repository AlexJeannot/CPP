#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string p_name) :
ClapTrap(p_name),
NinjaTrap(p_name),
FragTrap(p_name)
{
    std::cout << "Construction du meilleur des Traps" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "Meme les meilleurs meurt un jour !" << std::endl;
}

void SuperTrap::introduceAttack(std::string const & target)
{
    std::cout << "SUPER-TP ";
    std::cout << this->getName();
    std::cout << " attaque ";
    std::cout << target;
}

void SuperTrap::rangedAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " à distance, causant ";
    std::cout << this->getRangedAttackDamage();
    std::cout << " points de dégâts!" << std::endl;
}

void SuperTrap::meleeAttack(std::string const & target)
{
    (void)target;
    std::cout << " au sabre, infligeant ";
    std::cout << this->getMeleeAttackDamage();
    std::cout << " points de dégâts !" << std::endl;
}

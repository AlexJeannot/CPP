#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string p_name) :
ClapTrap(p_name)
{
    std::cout << "Come on !" << std::endl;
    this->maxHitPoints = 60;
    this->hitPoints = 60;
    this->maxEnergyPoints = 120;
    this->energyPoints = 120;
    this->level = 1;
    this->name = p_name;
    this->meleeAttackDamage = 60;
    this->rangedAttackDamage = 5;
    this->armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "C'est fini pour moi !" <<std::endl;
}

void NinjaTrap::introduceAttack(std::string const & target)
{
    std::cout << "NINJA-TP ";
    std::cout << this->getName();
    std::cout << " attaque ";
    std::cout << target;
}

void NinjaTrap::rangedAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " avec des shuriken, infligeant ";
    std::cout << this->getRangedAttackDamage();
    std::cout << " points de dégâts!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " au sabre, infligeant ";
    std::cout << this->getMeleeAttackDamage();
    std::cout << " points de dégâts !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap & clapTrap)
{
    std::cout << "Bonjour " << clapTrap.getName() << ", ca fait quoi de ne pas avoir de technique speciale ?" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & fragTrap)
{
    std::cout << "Comment tu vas " << fragTrap.getName() << " ? Woh tu fais ";
    std::cout << fragTrap.getMeleeAttackDamage() << " points de degats !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & scavTrap)
{
    std::cout << "Salut " << scavTrap.getName() << ", toujours a tenir la porte ?" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & ninjaTrap)
{
    std::cout << "Hello " << ninjaTrap.getName() << ", je vois qu'on est de la meme famille" << std::endl;
}
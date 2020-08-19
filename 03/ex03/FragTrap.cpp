#include "FragTrap.hpp"

FragTrap::FragTrap(std::string p_name) :
ClapTrap(p_name)
{
    std::cout << "Ready to go ?" << std::endl;
    this->setMaxHitPoints(100);
    this->setHitPoints(100);
    this->setMaxEnergyPoints(100);
    this->setEnergyPoints(100);
    this->setMeleeAttackDamage(30);
    this->setRangedAttackDamage(20);
    this->setArmorDamageReduction(5);
}

FragTrap::~FragTrap(void)
{
    std::cout << "Arggggg !" <<std::endl;
}

void FragTrap::introduceAttack(std::string const & target)
{
    std::cout << "FR4G-TP ";
    std::cout << this->getName();
    std::cout << " attaque ";
    std::cout << target;
}

void FragTrap::rangedAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " à distance, causant ";
    std::cout << this->getRangedAttackDamage();
    std::cout << " points de dégâts!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " au corps a corps, causant ";
    std::cout << this->getMeleeAttackDamage();
    std::cout << " points de dégâts !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->getEnergyPoints() < 25)
        std::cout << "Pas assez d'energie disponible !" << std::endl;
    else
    {
        this->consumeEnergy(25);
        this->introduceAttack(target);
        this->pickRandomAttack();
        std::cout << " causant ";
        std::cout << std::rand() % 25;
        std::cout << " points de dégâts !" << std::endl;
    }
}

void FragTrap::pickRandomAttack(void)
{
    switch(std::rand() % 5)
    {
        case 0:
            this->frisbeeAttack();
            break;
        case 1:
            this->trampolineAttack();
            break;
        case 2:
            this->sparklingWaterAttack();
            break;
        case 3:
            this->slackAttack();
            break;
        case 4:
            this->readBookAttack();
            break;
    }
}

void FragTrap::frisbeeAttack(void)
{
    std::cout << " en lui envoyant un frisbee de 34 metres";
}

void FragTrap::trampolineAttack(void)
{
    std::cout << " en faisant un triple salto sur le trampoline";
}

void FragTrap::sparklingWaterAttack(void)
{
    std::cout << " en buvant de l'eau gazeuze";
}

void FragTrap::slackAttack(void)
{
    std::cout << " en le spamant sur slack";
}

void FragTrap::readBookAttack(void)
{
    std::cout << " en lisant un bon livre";
}
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string p_name) :
hitPoints(100),
maxHitPoints(100),
energyPoints(100),
maxEnergyPoints(100),
level(1),
name(p_name),
meleeAttackDamage(30),
rangedAttackDamage(20),
armorDamageReduction(5)
{
    std::cout << "Ready to go ?" << std::endl;
    srand(time(NULL));
}

FragTrap::~FragTrap(void)
{
    std::cout << "Arggggg !" <<std::endl;
}

void FragTrap::introduceAttack(std::string const & target)
{
    std::cout << "FR4G-TP ";
    std::cout << this->name;
    std::cout << " attaque ";
    std::cout << target;
}

void FragTrap::rangedAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " à distance, causant ";
    std::cout << this->rangedAttackDamage;
    std::cout << " points de dégâts!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " au corps a corps, causant ";
    std::cout << this->meleeAttackDamage;
    std::cout << " points de dégâts !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "Aiiiiie !" << std::endl;
    if ((this->hitPoints -= (amount - this->armorDamageReduction)) < 0)
        this->hitPoints = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "Booyah !" << std::endl;
    if ((this->hitPoints += amount) > maxHitPoints)
        this->hitPoints = 100;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (energyPoints < 25)
        std::cout << "Pas assez d'energie disponible !" << std::endl;
    else
    {
        this->energyPoints -= 25;
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

void FragTrap::displayHitPoints(void)
{
    std::cout << "Il reste " << this->hitPoints << " points de vie a " << this->name << std::endl;
}

void FragTrap::displayEnergyPoints(void)
{
    std::cout << "Il reste " << this->energyPoints << " points d'energie a " << this->name << std::endl;
}

unsigned int FragTrap::getMaxEnergyPoints(void)
{
    return (this->maxEnergyPoints);
}

unsigned int FragTrap::getLevel(void)
{
    return (this->level);
}
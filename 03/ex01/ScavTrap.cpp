#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string p_name) :
hitPoints(100),
maxHitPoints(100),
energyPoints(50),
maxEnergyPoints(50),
level(1),
name(p_name),
meleeAttackDamage(20),
rangedAttackDamage(15),
armorDamageReduction(3)
{
    std::cout << "Let's hold this door !" << std::endl;
    srand(time(NULL));
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Je meuuuuuurs !" <<std::endl;
}

void ScavTrap::introduceAttack(std::string const & target)
{
    std::cout << "SCAV-TP ";
    std::cout << this->name;
    std::cout << " affronte ";
    std::cout << target;
}

void ScavTrap::rangedAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " de loin, lui faisant ";
    std::cout << this->rangedAttackDamage;
    std::cout << " points de dégâts!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " au contact, lui faisant ";
    std::cout << this->meleeAttackDamage;
    std::cout << " points de dégâts !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "Outch !" << std::endl;
    if ((this->hitPoints -= (amount - this->armorDamageReduction)) < 0)
        this->hitPoints = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "Je me sens mieux !" << std::endl;
    if ((this->hitPoints += amount) > maxHitPoints)
        this->hitPoints = 100;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
    if (energyPoints < 25)
        std::cout << "Je n'ai plus d'energie !" << std::endl;
    else
    {
        this->energyPoints -= 25;
        this->introduceAttack(target);
        std::cout << " en lui posant le challenge suivant : ";
        this->pickRandomChallenge();
    }
}

void ScavTrap::pickRandomChallenge(void)
{
    switch(std::rand() % 5)
    {
        case 0:
            this->mathChallenge();
            break;
        case 1:
            this->orthographChallenge();
            break;
        case 2:
            this->runChallenge();
            break;
        case 3:
            this->thumbWreslteChallenge();
            break;
        case 4:
            this->poleChallenge();
            break;
    }
}

void ScavTrap::mathChallenge(void)
{
    std::cout << "Combien font 7 x 6 ?" << std::endl;
}

void ScavTrap::orthographChallenge(void)
{
    std::cout << "Combien il y a de voyelles dans l'alphabet ?" << std::endl;
}

void ScavTrap::runChallenge(void)
{
    std::cout << "Peux tu courir 100 metres en moins de 15 secondes ?" << std::endl;
}

void ScavTrap::thumbWreslteChallenge(void)
{
    std::cout << "Peux tu me battre au bras de fer chinois ?" << std::endl;
}

void ScavTrap::poleChallenge(void)
{
    std::cout << "Combien de temps vas tu tenir a l'epreuve des poteaux ?" << std::endl;
}

void ScavTrap::displayHitPoints(void)
{
    std::cout << "Il reste " << this->hitPoints << " points de vie a " << this->name << std::endl;
}

void ScavTrap::displayEnergyPoints(void)
{
    std::cout << "Il reste " << this->energyPoints << " points d'energie a " << this->name << std::endl;
}

unsigned int ScavTrap::getMaxEnergyPoints(void)
{
    return (this->maxEnergyPoints);
}

unsigned int ScavTrap::getLevel(void)
{
    return (this->level);
}
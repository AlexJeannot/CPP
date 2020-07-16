#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string p_name) :
ClapTrap(p_name)
{
    std::cout << "Let's hold this door !" << std::endl;
    this->setMaxHitPoints(100);
    this->setHitPoints(100);
    this->setMaxEnergyPoints(50);
    this->setEnergyPoints(50);
    this->setMeleeAttackDamage(20);
    this->setRangedAttackDamage(15);
    this->setArmorDamageReduction(3);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Je meuuuuuurs !" <<std::endl;
}

void ScavTrap::introduceAttack(std::string const & target)
{
    std::cout << "SCAV-TP ";
    std::cout << this->getName();
    std::cout << " affronte ";
    std::cout << target;
}

void ScavTrap::rangedAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " de loin, lui faisant ";
    std::cout << this->getRangedAttackDamage();
    std::cout << " points de dégâts!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    this->introduceAttack(target);
    std::cout << " au contact, lui faisant ";
    std::cout << this->getMeleeAttackDamage();
    std::cout << " points de dégâts !" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
    if (this->getEnergyPoints() < 25)
        std::cout << "Je n'ai plus d'energie !" << std::endl;
    else
    {
        this->consumeEnergy(25);
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
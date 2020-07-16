#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string p_name) :
hitPoints(20),
maxHitPoints(150),
energyPoints(20),
maxEnergyPoints(150),
level(1),
name(p_name),
meleeAttackDamage(15),
rangedAttackDamage(10),
armorDamageReduction(2)
{
    std::cout << "Constructeur CLAPTRAP" << std::endl;
    srand(time(NULL));
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructeur CLAPTRAP" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((this->hitPoints -= (amount - this->armorDamageReduction)) < 0)
        this->hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((this->hitPoints += amount) > maxHitPoints)
        this->hitPoints = 100;
}

void ClapTrap::consumeEnergy(unsigned int amount)
{
    if ((this->energyPoints -= amount) < 0)
        this->energyPoints = 0;
}

void ClapTrap::refillEnergy(unsigned int amount)
{
    if ((this->energyPoints += amount) > maxEnergyPoints)
        this->energyPoints = 100;
}


// DISPLAY METHODS


void ClapTrap::displayHitPoints(void)
{
    std::cout << "Il reste " << this->hitPoints << " points de vie a " << this->name << std::endl;
}

void ClapTrap::displayEnergyPoints(void)
{
    std::cout << "Il reste " << this->energyPoints << " points d'energie a " << this->name << std::endl;
}


// GET METHODS

unsigned int ClapTrap::getHitPoints(void)
{
    return (this->hitPoints);
}

unsigned int ClapTrap::getMaxHitPoints(void)
{
    return (this->maxHitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void)
{
    return (this->energyPoints);
}

unsigned int ClapTrap::getMaxEnergyPoints(void)
{
    return (this->maxEnergyPoints);
}

unsigned int ClapTrap::getLevel(void)
{
    return (this->level);
}

std::string ClapTrap::getName(void)
{
    return (this->name);
}

unsigned int ClapTrap::getMeleeAttackDamage(void)
{
    return (this->meleeAttackDamage);
}

unsigned int ClapTrap::getRangedAttackDamage(void)
{
    return (this->rangedAttackDamage);
}

unsigned int ClapTrap::getArmorDamageReduction(void)
{
    return (this->armorDamageReduction);
}


// SET METHODS


void ClapTrap::setHitPoints(unsigned int pHP)
{
    if (pHP <= this->maxHitPoints)
        this->hitPoints = pHP;
    else
        std::cout << "Valeur invalide" << std::endl;
}

void ClapTrap::setMaxHitPoints(unsigned int pMaxHP)
{
    this->maxHitPoints = pMaxHP;
}

void ClapTrap::setEnergyPoints(unsigned int pEP)
{
    if (pEP <= this->maxEnergyPoints)
        this->energyPoints = pEP;
    else
        std::cout << "Valeur invalide" << std::endl;
}

void ClapTrap::setMaxEnergyPoints(unsigned int pMaxEP)
{
    this->maxEnergyPoints = pMaxEP;
}

void ClapTrap::setLevel(unsigned int pLevel)
{
    this->level = pLevel;
}

void ClapTrap::setName(std::string pName)
{
    this->name = pName;
}

void ClapTrap::setMeleeAttackDamage(unsigned int pMeleeAttackDamage)
{
    this->meleeAttackDamage = pMeleeAttackDamage;
}

void ClapTrap::setRangedAttackDamage(unsigned int pRangedAttackDamage)
{
    this->rangedAttackDamage = pRangedAttackDamage;
}

void ClapTrap::setArmorDamageReduction(unsigned int pArmorDamageReduction)
{
    this->armorDamageReduction = pArmorDamageReduction;
}

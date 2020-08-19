#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
    std::cout << "=========== CLAPTRAP ===========\n" << std::endl;
    ClapTrap clapTrap("Tim");

    clapTrap.displayAll();
    clapTrap.takeDamage(15);
    clapTrap.displayHitPoints();
    clapTrap.beRepaired(5);
    clapTrap.displayHitPoints();

    std::cout << "\n=========== FRAGTRAP ===========\n" << std::endl;
    FragTrap fragTrap("Persephone");

    fragTrap.displayAll();
    fragTrap.rangedAttack("Ennemi 1");
    fragTrap.meleeAttack("Ennemi 2");
    fragTrap.takeDamage(15);
    fragTrap.displayHitPoints();
    fragTrap.beRepaired(5);
    fragTrap.displayHitPoints();
    fragTrap.vaulthunter_dot_exe("Ennemi 3");
    fragTrap.displayEnergyPoints();
    fragTrap.vaulthunter_dot_exe("Ennemi 4");
    fragTrap.vaulthunter_dot_exe("Ennemi 5");
    fragTrap.vaulthunter_dot_exe("Ennemi 6");
    fragTrap.vaulthunter_dot_exe("Ennemi 7");

    std::cout << "\n=========== SCAVTRAP ===========\n" << std::endl;
    ScavTrap scavTrap("Autumn");

    scavTrap.displayAll();
    scavTrap.rangedAttack("Ennemi 1");
    scavTrap.meleeAttack("Ennemi 2");
    scavTrap.takeDamage(15);
    scavTrap.displayHitPoints();
    scavTrap.beRepaired(5);
    scavTrap.displayHitPoints();
    scavTrap.challengeNewcomer("Ennemi 3");
    scavTrap.displayEnergyPoints();
    scavTrap.challengeNewcomer("Ennemi 4");
    scavTrap.challengeNewcomer("Ennemi 5");

    std::cout << "\n=========== NINJATRAP ===========\n" << std::endl;
    NinjaTrap ninjaTrap("Darsh");

    ninjaTrap.displayAll();
    ninjaTrap.rangedAttack("Ennemi 1");
    ninjaTrap.meleeAttack("Ennemi 2");
    ninjaTrap.takeDamage(15);
    ninjaTrap.displayHitPoints();
    ninjaTrap.beRepaired(5);
    ninjaTrap.displayHitPoints();
    ninjaTrap.ninjaShoebox(clapTrap);
    ninjaTrap.ninjaShoebox(fragTrap);
    ninjaTrap.ninjaShoebox(scavTrap);
    ninjaTrap.ninjaShoebox(ninjaTrap);

    std::cout << "\n=========== SUPERTRAP ===========\n" << std::endl;
    SuperTrap superTrap("Subhan");

    superTrap.displayAll();
    superTrap.rangedAttack("Ennemi 1");
    superTrap.meleeAttack("Ennemi 2");
    superTrap.takeDamage(15);
    superTrap.displayHitPoints();
    superTrap.beRepaired(5);
    superTrap.displayHitPoints();
    superTrap.displayEnergyPoints();
    superTrap.ninjaShoebox(ninjaTrap);
    superTrap.displayEnergyPoints();
    superTrap.vaulthunter_dot_exe("SUPER ENNEMI");
    superTrap.displayEnergyPoints();

    std::cout << "\n=========== DESTRUCTIONS ===========\n" << std::endl;
}   
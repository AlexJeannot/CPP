#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    std::cout << "=========== CLAPTRAP ===========\n" << std::endl;
    ClapTrap clapTrap("Tim");

    clapTrap.takeDamage(15);
    clapTrap.displayHitPoints();
    clapTrap.beRepaired(5);
    clapTrap.displayHitPoints();

    std::cout << "\n=========== FRAGTRAP ===========\n" << std::endl;
    FragTrap fragTrap("Persephone");

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

    std::cout << "\n=========== DESTRUCTIONS ===========\n" << std::endl;
}   
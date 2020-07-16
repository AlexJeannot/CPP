#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=========== FRAGTRAP ===========\n" << std::endl;
    FragTrap fragTrap("Alex");

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
    ScavTrap scavTrap("Pierre");

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

    std::cout << "\n=========== DESTRUCTIONS ===========\n" << std::endl;
}
#include "FragTrap.hpp"

int main()
{
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
}
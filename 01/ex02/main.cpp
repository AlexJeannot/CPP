#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    std::cout << "\n======== Default zombie ========\n" << std::endl;
    Zombie Zombie1;

    std::cout << "\n\n======== Simple zombie ========\n" << std::endl;
    Zombie Zombie2("Connie", "Skinny");

    std::cout << "\n\n======== Via ZombieEvent ========\n" << std::endl;
    ZombieEvent viaZombieEvent;

    std::cout << "-------- Without type --------\n" << std::endl;
    Zombie * Zombie3 = viaZombieEvent.newZombie("Parker");

    std::cout << "\n-------- With type --------\n" << std::endl;
    viaZombieEvent.setZombieType("Regular");
    Zombie * Zombie4 = viaZombieEvent.newZombie("Jacquelyn");

    std::cout << "\n-------- With random name and new type --------\n" << std::endl;
    viaZombieEvent.setZombieType("Fat");
    Zombie * Zombie5 = viaZombieEvent.randomChump();

    std::cout << "\n\n======== Total ========\n" << std::endl;
    Zombie1.announce();
    Zombie2.announce();
    Zombie3->announce();
    Zombie4->announce();
    Zombie5->announce();

    delete Zombie3;
    delete Zombie4;
    delete Zombie5;

    std::cout << std::endl << std::endl;
    system("leaks a.out");
    return (0);
}
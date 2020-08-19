#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    std::cout << "\n======= RANDOM HORDE ========\n" << std::endl;
    ZombieHorde randomHorde;
    randomHorde.announceHorde();
    std::cout << "\n Horde size = " << randomHorde.getHordeSize() << std::endl;

    std::cout << "\n======= NOT RANDOM HORDE ========\n" << std::endl;
    ZombieHorde notRandomHorde(13);
    notRandomHorde.announceHorde();
    std::cout << "\n Horde size = " << notRandomHorde.getHordeSize() << std::endl;

    std::cout << std::endl << std::endl;
    system("leaks a.out");
    return (0);
}
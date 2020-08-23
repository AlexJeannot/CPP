#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* moi = new Character("moi");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);

    ICharacter* bob = new Character("bob");

    moi->use(0, *bob);
    moi->use(1, *bob);

    delete bob;
    delete moi;
    delete src;

    std::cout << std::endl << "=========== MORE TESTS ===========" << std::endl;
    std::cout << std::endl << "----- Creation stack -----" << std::endl;

    Ice stackIceMateria;
    Cure stackCureMateria;
    Character john;
    Character target("TARGET");

    std::cout << std::endl << "----- Copie stack -----" << std::endl;
    Ice copyStackIceMateria(stackIceMateria);
    Cure copyStackCureMateria(stackCureMateria);

    std::cout << std::endl << "----- Creation heap -----" << std::endl;
    Ice* heapIceMateria = new Ice;
    Cure* heapCureMateria = new Cure;

    std::cout << std::endl << "----- Copie heap -----" << std::endl;

    Ice* copyHeapIceMateria = new Ice(*heapIceMateria);
    Cure* copyHeapCureMateria = new Cure(*heapCureMateria);

    std::cout << std::endl << "----- Utilisation -----" << std::endl;
    std::cout << john.getName() << std::endl;
    std::cout << heapIceMateria->getType() << std::endl;
    std::cout << heapCureMateria->getType() << std::endl;
    std::cout << copyHeapIceMateria->getType() << std::endl;
    std::cout << copyHeapCureMateria->getType() << std::endl;

    john.equip(nullptr);
    john.use(0, target);
    john.equip(heapIceMateria);
    std::cout << "XP avant utilisation : " << heapIceMateria->getXP() << std::endl;
    john.use(0, target);
    std::cout << "XP apres utilisation : " << heapIceMateria->getXP() << std::endl;
    john.equip(heapIceMateria);
    john.use(1, target);
    john.equip(heapCureMateria);
    john.equip(copyHeapIceMateria);
    john.equip(copyHeapCureMateria);

    std::cout << "------ BOUCLE 1 ------" << std::endl;
    for (int count = 0; count < 4; count++)
        john.use(count, target);

    john.unequip(-1);
    john.unequip(4);

    std::cout << "------ BOUCLE 2 ------" << std::endl;
    for (int count = 0; count < 4; count++)
        john.use(count, target);

    john.unequip(0);

    std::cout << "------ BOUCLE 3 ------" << std::endl;
    for (int count = 0; count < 4; count++)
        john.use(count, target);

    john.unequip(1);

    std::cout << "------ BOUCLE 4 ------" << std::endl;
    for (int count = 0; count < 4; count++)
        john.use(count, target);

    john.equip(heapCureMateria->clone());
    john.equip(stackCureMateria.clone());

    std::cout << "------ BOUCLE 5 ------" << std::endl;
    for (int count = 0; count < 4; count++)
        john.use(count, target);

    Ice* SecondcopyHeapIceMateria = new Ice(*heapIceMateria);
    std::cout << "XP original : " << heapIceMateria->getXP() << std::endl;
    std::cout << "XP copie : " << SecondcopyHeapIceMateria->getXP() << std::endl;

    std::cout << std::endl << "----- Nouveau personnage -----" << std::endl;

    Character sonia("Sonia");
    sonia = john;

    std::cout << "------ BOUCLE 6 ------" << std::endl;
    for (int count = 0; count < 4; count++)
        sonia.use(count, target);

    for (int count = 0; count < 4; count++)
        sonia.unequip(0);
    
    sonia.use(0, target);

    return (0);
}
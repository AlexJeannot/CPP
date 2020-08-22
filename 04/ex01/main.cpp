#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
    Character* moi = new Character("moi");

    std::cout << *moi;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);

    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    
    std::cout << std::endl << "======= MORE TESTS =======" << std::endl;
    Enemy* mutant = new SuperMutant();
    moi->attack(mutant);
    std::cout << *moi;
    moi->attack(mutant);
    std::cout << *moi;
    moi->attack(mutant);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(mutant);
    std::cout << *moi;
    moi->recoverAP();
    std::cout << *moi;
    moi->attack(mutant);
    std::cout << *moi;

    return 0;
}
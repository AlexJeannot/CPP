#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;

    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << std::endl << "=========== MORE TESTS ===========" << std::endl;
    std::cout << std::endl << "----- Creation -----" << std::endl;
    Squad mySquad;
    TacticalMarine john;
    AssaultTerminator arnold;
    TacticalMarine secondJohn(john);
    AssaultTerminator secondArnold(arnold);
    secondJohn = john;
    secondArnold = arnold;

    TacticalMarine* arthur = new TacticalMarine;
    AssaultTerminator* luc = new AssaultTerminator;

    TacticalMarine* secondArthur = new TacticalMarine(*arthur);
    AssaultTerminator* secondLuc = new AssaultTerminator(*luc);

    std::cout << std::endl << "----- Utilisation copie -----" << std::endl;
    secondArthur->battleCry();
    (*secondLuc).battleCry();

    std::cout << std::endl << "----- Modification squad -----" << std::endl;
    std::cout << mySquad.push(nullptr) << std::endl;
    std::cout << mySquad.push(arthur) << std::endl;
    std::cout << mySquad.push(luc) << std::endl;
    std::cout << mySquad.push(nullptr) << std::endl;
    std::cout << mySquad.getUnit(-1) << std::endl;
    std::cout << mySquad.getUnit(30) << std::endl;
    std::cout << mySquad.getUnit(0) << std::endl;
    std::cout << mySquad.getCount() << std::endl;

    std::cout << std::endl << "----- Copie squad stack -----" << std::endl;
    Squad mySecondSquad(mySquad);
    std::cout << mySecondSquad.getUnit(0) << std::endl;

    std::cout << std::endl << "----- Copie squad heap -----" << std::endl;
    Squad * myThirdSquad = new Squad(mySecondSquad);
    std::cout << myThirdSquad->getUnit(0) << std::endl;

    std::cout << std::endl << "----- Destructor -----" << std::endl;
    return (0);
}
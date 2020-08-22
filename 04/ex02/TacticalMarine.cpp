#include "TacticalMarine.hpp"

/* Constructors and destructor */
TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine & other)
{
    (void)other;
    std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}


/* Operator overloads */

TacticalMarine & TacticalMarine::operator=(const TacticalMarine & other)
{
    (void)other;
    return (*this);
}


/* Other member functions */

ISpaceMarine* TacticalMarine::clone() const
{
    return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
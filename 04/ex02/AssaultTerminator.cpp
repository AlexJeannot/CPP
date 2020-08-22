#include "AssaultTerminator.hpp"

/* Constructors and destructor */
AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & other)
{
    (void)other;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back ..." << std::endl;
}


/* Operator overloads */

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator & other)
{
    (void)other;
    return (*this);
}


/* Other member functions */

ISpaceMarine* AssaultTerminator::clone() const
{
    return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attaque with chainfists *" << std::endl;
}
#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        /* Constructors and destructor */
        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator & other);
        ~AssaultTerminator();

        /* Operator overloads */
        AssaultTerminator & operator=(const AssaultTerminator & other);

        /* Other member functions */
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif
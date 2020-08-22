#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        /* Constructors and destructor */
        TacticalMarine();
        TacticalMarine(const TacticalMarine & other);
        ~TacticalMarine();

        /* Operator overloads */
        TacticalMarine & operator=(const TacticalMarine & other);

        /* Other member functions */
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif
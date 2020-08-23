#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        /* Constructors and destructor */
        Ice();
        Ice(const Ice & other);
        ~Ice();

        /* Operator overloads */
        Ice & operator=(const Ice & other);

        /* Other member functions */
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
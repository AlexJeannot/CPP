#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        /* Constructors and destructor */
        Cure();
        Cure(const Cure & other);
        ~Cure();

        /* Operator overloads */
        Cure & operator=(const Cure & other);

        /* Other member functions */
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
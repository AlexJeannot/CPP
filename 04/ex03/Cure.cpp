#include "Cure.hpp"

/* Constructors and destructor */

Cure::Cure() : 
AMateria("cure")
{

}


Cure::Cure(const Cure & other) : 
AMateria("cure")
{
    this->setXP(other.getXP());
}


Cure::~Cure()
{

}


/* Operator overloads */

Cure & Cure::operator=(const Cure & other)
{
    if (this != &other)
        this->setXP(other.getXP());
    return (*this);
}


/* Other member functions */

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    AMateria::use(target);
}
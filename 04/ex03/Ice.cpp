#include "Ice.hpp"

/* Constructors and destructor */

Ice::Ice() : 
AMateria("ice")
{

}


Ice::Ice(const Ice & other) : 
AMateria("ice")
{
    this->setXP(other.getXP());
}


Ice::~Ice()
{

}


/* Operator overloads */

Ice & Ice::operator=(const Ice & other)
{
    if (this != &other)
        this->setXP(other.getXP());
    return (*this);
}


/* Other member functions */

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}
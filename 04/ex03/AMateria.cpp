#include "AMateria.hpp"

/* Constructors and destructor */

AMateria::AMateria(std::string const & type) : 
_type(type), _xp(0)
{

}


AMateria::~AMateria()
{

}


/* Other member functions */

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::setType(const AMateria & other)
{
    this->_type = other._type;
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}
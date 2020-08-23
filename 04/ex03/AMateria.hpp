#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria;
#include "ICharacter.hpp"

class AMateria
{
    private:
        std::string _type;
        unsigned int _xp;
    public:
        /* Constructors and destructor */
        AMateria(std::string const & type);
        virtual ~AMateria();

        /* Other member functions */
        std::string const & getType() const; //Returns the materia type
        void setType(const AMateria & other);
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
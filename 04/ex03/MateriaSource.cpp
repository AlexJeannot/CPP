#include "MateriaSource.hpp"

/* Constructor and destructor */

MateriaSource::MateriaSource() : 
_materiaInventory(), _materiaNumber(0)
{

}

MateriaSource::MateriaSource(const MateriaSource & other) :
_materiaNumber(other._materiaNumber)
{
    copyMateriaInventory(other);
}

MateriaSource::~MateriaSource()
{
    deleteMateriaInventory();
}


/* Operator overloads */

MateriaSource & MateriaSource::operator=(const MateriaSource & other)
{
    if (this != &other)
    {
        deleteMateriaInventory();
        copyMateriaInventory(other);
        this->_materiaNumber = other._materiaNumber;
    }
    return (*this);
}


/* Other member functions */

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->_materiaNumber < 4 && m)
    {
        this->_materiaInventory[this->_materiaNumber] = m;
        this->_materiaNumber++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (this->_materiaNumber > 0)
    {
        for (int count = 0; count < this->_materiaNumber; count++)
            if (this->_materiaInventory[count]->getType() == type)
                return (this->_materiaInventory[count]->clone());
    }
    return (nullptr);
}

void MateriaSource::deleteMateriaInventory(void)
{
    for (int count = 0; count < this->_materiaNumber; count++)
    {
        delete this->_materiaInventory[count];
        this->_materiaInventory[count] = nullptr;
    }
    this->_materiaNumber = 0;
}

void MateriaSource::copyMateriaInventory(const MateriaSource & other)
{
    for (int count = 0; count < 4; count++)
    {
        if (other._materiaInventory[count])
            this->_materiaInventory[count] = other._materiaInventory[count]->clone();
        else
            this->_materiaInventory[count] = nullptr;
    }
}
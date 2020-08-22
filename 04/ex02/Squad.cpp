#include "Squad.hpp"

/* Constructors and destructor */
Squad::Squad() : 
_units(nullptr), _unitsNumber(0)
{

}

Squad::Squad(const Squad & other) :
_units(nullptr), _unitsNumber(0)
{
    copySquad(other);
}

Squad::~Squad()
{
    deleteSquad();
}


/* Operator overloads */

Squad & Squad::operator=(const Squad & other)
{
    deleteSquad();
    copySquad(other);
    return (*this);
}


/* Other member functions */

int Squad::getCount() const
{
    return (this->_unitsNumber);
}

ISpaceMarine* Squad::getUnit(int unitIndex) const
{
    if (unitIndex >= 0 && unitIndex < this->_unitsNumber)
        return (this->_units[unitIndex]);
    return (nullptr);
}

int Squad::push(ISpaceMarine* newUnit)
{
    if (!(newUnit))
        return (this->_unitsNumber);
    if (!(this->_units))
    {
        this->_units = new ISpaceMarine*[1];
        this->_units[0] = newUnit;
    }
    else
    {
        for (int count = 0; count < this->_unitsNumber; count++)
            if (this->_units[count] == newUnit)
                return (this->_unitsNumber);
        int newUnitsNumber = this->_unitsNumber + 1;
        ISpaceMarine **newUnitsArray = new ISpaceMarine*[newUnitsNumber];
        for (int count = 0; count < newUnitsNumber; count++)
            newUnitsArray[count] = this->_units[count];
        newUnitsArray[newUnitsNumber - 1] = newUnit;
        delete[] this->_units;
        this->_units = newUnitsArray;
    }
    this->_unitsNumber++;
    return(this->_unitsNumber);
}

void Squad::copySquad(const Squad & other)
{
    if (other._unitsNumber > 0)
    {
        ISpaceMarine **newUnitsArray = new ISpaceMarine*[other._unitsNumber];
        for (int count = 0; count < other._unitsNumber; count++)
            newUnitsArray[count] = other.getUnit(count)->clone();
        this->_units = newUnitsArray;
        this->_unitsNumber = other._unitsNumber;
    }
}

void Squad::deleteSquad(void)
{
    if (this->_units)
    {
        for (int count = 0; count < this->_unitsNumber; count++)
            delete this->_units[count];
        delete this->_units;
        this->_units = nullptr;
    }
    this->_unitsNumber = 0;
}
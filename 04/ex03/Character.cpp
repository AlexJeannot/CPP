#include "Character.hpp"

/* Constructor and destructor */

Character::Character(std::string name) :
_materiaInventory(), _name(name), _materiaNumber(0)
{

}

Character::Character(const Character & other) : 
_name(other._name), _materiaNumber(other._materiaNumber)
{
    copyMateriaInventory(other);
}

Character::~Character()
{
    deleteMateriaInventory();
}


/* Operator overloads */

Character & Character::operator=(const Character & other)
{
    if (this != &other)
    {
        deleteMateriaInventory();
        copyMateriaInventory(other);
        this->_materiaNumber = other._materiaNumber;
        this->_name = other._name;
    }
    return (*this);
}


/* Other member functions */

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    if (this->_materiaNumber < 4 && m)
    {
        for (int count = 0; count < this->_materiaNumber; count++)
            if (this->_materiaInventory[count] == m)
                return ;
        this->_materiaInventory[this->_materiaNumber] = m;
        this->_materiaNumber++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && this->_materiaNumber > idx)
    {
        this->_materiaInventory[idx] = nullptr;
        for (int count = 0; count < 3; count++)
        {
            if (this->_materiaInventory[count] == nullptr)
            {
                this->_materiaInventory[count] = this->_materiaInventory[count + 1];
                this->_materiaInventory[count + 1] = nullptr;
            }
        }
        this->_materiaNumber--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && this->_materiaNumber > idx)
        this->_materiaInventory[idx]->use(target);
}

void Character::deleteMateriaInventory(void)
{
    for (int count = 0; count < this->_materiaNumber; count++)
    {
        delete this->_materiaInventory[count];
        this->_materiaInventory[count] = nullptr;
    }
    this->_materiaNumber = 0;
}

void Character::copyMateriaInventory(const Character & other)
{
    for (int count = 0; count < 4; count++)
    {
        if (other._materiaInventory[count])
            this->_materiaInventory[count] = other._materiaInventory[count]->clone();
        else
            this->_materiaInventory[count] = nullptr;
    }
}

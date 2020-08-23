#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        AMateria *_materiaInventory[4];
        std::string _name;
        int _materiaNumber;

    public:
        /* Constructor and destructor */
        Character(std::string name = "John Doe");
        Character(const Character & other);
        ~Character();

        /* Operator overloads */
        Character & operator=(const Character & other);

        /* Other member functions */
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void deleteMateriaInventory(void);
        void copyMateriaInventory(const Character & other);
};

#endif
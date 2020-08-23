#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria * _materiaInventory[4];
        int _materiaNumber;
    public:
        /* Constructor and destructor */
        MateriaSource();
        MateriaSource(const MateriaSource & other);
        virtual ~MateriaSource();

        /* Operator overloads */
        MateriaSource & operator=(const MateriaSource & other);

        /* Other member functions */
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        void deleteMateriaInventory(void);
        void copyMateriaInventory(const MateriaSource & other);
};

#endif
#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    private:
            ISpaceMarine ** _units;
            int _unitsNumber;

    public:
        /* Constructors and destructor */
        Squad();
        Squad(const Squad & other);
        ~Squad();

        /* Operator overloads */
        Squad & operator=(const Squad & other);

        /* Other member functions */
        int getCount() const;
        ISpaceMarine* getUnit(int unitIndex) const;
        int push(ISpaceMarine*);
        void copySquad(const Squad & other);
        void deleteSquad(void);
};


#endif
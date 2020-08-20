#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
    private:
        std::string _name;
    
    public:
        /* Constructors and destructor */
        Victim(std::string name = "Hansel");
        Victim(const Victim & obj);
        ~Victim();

        /* Operator overloads */
        Victim & operator=(const Victim & obj);

        /* member functions */
        virtual void getPolymorphed() const;
        std::string getName() const;
        void setName(std::string name);

};

/* Helper functions */
std::ostream & operator<<(std::ostream& output, Victim const& obj);

#endif
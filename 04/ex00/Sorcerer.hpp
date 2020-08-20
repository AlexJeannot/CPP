#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;
    
    public:
        /* Constructors and destructor */
        Sorcerer(std::string name = "Merlin", std::string title = "basic sorcerer");
        Sorcerer(const Sorcerer & obj);
        ~Sorcerer();

        /* Operator overloads */
        Sorcerer & operator=(const Sorcerer & obj);

        /* member functions */
        void polymorph(const Victim & obj) const;
        std::string getName() const;
        std::string getTitle() const;

};

/* Helper functions */
std::ostream & operator<<(std::ostream& output, Sorcerer const& obj);

#endif
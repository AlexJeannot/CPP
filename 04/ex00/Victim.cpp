#include "Victim.hpp"

Victim::Victim(std::string name) :
_name(name)
{
    std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & obj) : 
_name(obj._name)
{
    std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
}

Victim & Victim::operator=(const Victim & obj)
{
    if (this != &obj)
        _name = obj._name;
    return *this;
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::string Victim::getName() const
{
    return (_name);
}

void Victim::setName(std::string name)
{
    _name = name;
}

std::ostream & operator<<(std::ostream& output, Victim const& obj)
{
    output << "I'm " << obj.getName() <<  " and i like otters!" << std::endl;
    return (output);
}
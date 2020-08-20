#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) :
_name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & obj) : 
_name(obj._name), _title(obj._title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title;
    std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(const Sorcerer & obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        _title = obj._title; 
    }
    return *this;
}

void Sorcerer::polymorph(const Victim & obj) const
{
    obj.getPolymorphed();
}

std::string Sorcerer::getName() const
{
    return (_name);
}

std::string Sorcerer::getTitle() const
{
    return (_title);
}

std::ostream & operator<<(std::ostream& output, Sorcerer const& obj)
{
    output << "I am " << obj.getName() <<  ", " << obj.getTitle();
    output << ", and i like ponies!" << std::endl;
    return (output);
}
#include "Peon.hpp"

Peon::Peon(std::string name) :
Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & obj) : 
Victim(obj.getName())
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(const Peon & obj)
{
    if (this != &obj)
        this->setName(obj.getName());
    return *this;
}

void Peon::getPolymorphed() const
{
    std::cout << this->getName() << " was just polymorphed in a pink pony!" << std::endl;
}
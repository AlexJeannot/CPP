#include "PresidentialPardonForm.hpp"

/* Constructor and destructors */

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
Form(target, "Presidential pardon form", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : 
Form(other.getTarget(), "Presidential pardon form", 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}


/* Operator overloads */

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
    if (this != &other)
    {
        this->setTarget(other);
        this->setSigned(other);
    }
    return (*this);
}


/* Other member functions */

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
    Form::execute(executor);

    std::cout << this->getTarget() << " has been forgiven by president Zafod Beeblebrox";
    std::cout << std::endl;
}
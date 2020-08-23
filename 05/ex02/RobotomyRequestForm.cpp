#include "RobotomyRequestForm.hpp"

/* Constructor and destructors */

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
Form(target, "Robotomy request form", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : 
Form(other.getTarget(), "Robotomy request form", 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}


/* Operator overloads */

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
    if (this != &other)
    {
        this->setTarget(other);
        this->setSigned(other);
    }
    return (*this);
}


/* Other member functions */

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
    Form::execute(executor);

    std::cout << "Brrrrrrrrrrrrrr" << std::endl;
    srand(time(NULL));
    if ((rand() % 100) > 49)
        std::cout << this->getTarget() << " has been successfully robotimized" << std::endl;
    else
        std::cout << "Robotimization on " << this->getTarget() << " has failed" << std::endl;
}
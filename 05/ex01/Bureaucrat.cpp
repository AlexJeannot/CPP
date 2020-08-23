#include "Bureaucrat.hpp"

/* Constructor and destructors */

Bureaucrat::Bureaucrat(std::string name, int grade) : 
_name(name), _grade(grade)
{
    verifyGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : 
_name(other._name), _grade(other._grade)
{
    verifyGrade();
}

Bureaucrat::~Bureaucrat()
{
    
}


/* Operator overloads */

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
    if (this != &other)
        this->_grade = other._grade;
    verifyGrade();
    return (*this);
}


/* Exceptions classes member functions */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat: Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat: Grade too low");
}


/* Other member functions */

const std::string & Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
       return (this->_grade); 
}

void Bureaucrat::incrementGrade(void)
{
    this->_grade--;
    verifyGrade();
}

void Bureaucrat::decrementGrade(void)
{
    this->_grade++;
    verifyGrade();
}

void Bureaucrat::verifyGrade(void) const
{
    if (this->_grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form & obj) const
{
    if (obj.getSigned() == true)
        std::cout << obj.getName() << " is already signed";
    else if (this->_grade <= obj.getSignGrade())
    {
        obj.beSigned(*this);
        std::cout << this->_name << " signs " << obj.getName();
    }
    else
        std::cout << this->_name << "can't signs " << obj.getName() << " because grade too low";
    std::cout << std::endl;
}


/* Helper functions */

std::ostream & operator<<(std::ostream & output, const Bureaucrat & obj)
{
    output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return (output);
}
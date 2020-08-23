#include "Form.hpp"

/* Constructor and destructors */

Form::Form(std::string name, int signGrade, int execGrade) : 
_name(name), _signGrade(signGrade),
_execGrade(execGrade), _signed(false)
{
    verifyGrade();
}

Form::Form(const Form & other) : 
_name(other._name), _signGrade(other._signGrade),
_execGrade(other._execGrade), _signed(other._signed)
{
    verifyGrade();
}

Form::~Form()
{

}



/* Operator overloads */

Form & Form::operator=(const Form & other)
{
    if (this != &other)
        this->_signed = other._signed;
    verifyGrade();
    return (*this);
}

/* Exceptions classes member functions */

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form: Grade too high");
}


const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form: Grade too low");
}


/* Other member functions */

const std::string &  Form::getName(void) const
{
    return (this->_name);
}

int Form::getSignGrade(void) const
{
    return (this->_signGrade);
}

int Form::getExecGrade(void) const
{
    return (this->_execGrade);
}

bool Form::getSigned(void) const
{
    return (this->_signed);
}

void Form::verifyGrade(void) const
{
    if (this->_signGrade <= 0 || this->_execGrade <= 0)
        throw Form::GradeTooHighException();
    else if (this->_signGrade > 150 || this->_execGrade > 150)
        throw Form::GradeTooLowException();
}

void Form::beSigned(const Bureaucrat & obj)
{
    if (this->_signed == true)
        std::cout << this->_name << " is already signed" << std::endl;
    if (obj.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}


/* Helper functions */

std::ostream & operator<<(std::ostream & output, const Form & obj)
{
    output << "Form " << obj.getName() << ": ";
    output << "sign grade (" << obj.getSignGrade() << ") and ";
    output << "execute grade (" << obj.getExecGrade() << ") ";
    if (obj.getSigned())
        output << "is signed";
    else
        output << "is not signed";
    output << std::endl;
    return (output);
}

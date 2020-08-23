#include "Form.hpp"

/* Constructor and destructors */

Form::Form(std::string target, std::string name, int signGrade, int execGrade) : 
_target(target), _name(name), _signGrade(signGrade),
_execGrade(execGrade), _signed(false)
{
    verifyGrade();
}

Form::Form(const Form & other) : 
_target(other._target), _name(other._name), _signGrade(other._signGrade),
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
    {
        this->_target = other._target;
        this->_signed = other._signed;
    }
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

const char* Form::FormNotSignedException::what() const throw()
{
    return ("Form: Not signed");
}

/* Other member functions */

const std::string & Form::getTarget () const
{
    return (this->_target);
}

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

void Form::setTarget(const Form & obj)
{
    this->_target = obj._target;
}

void Form::setSigned(const Form & obj)
{
    this->_signed = obj._signed; 
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

void Form::execute(const Bureaucrat & executor) const
{
    if (this->_signed == false)
        throw Form::FormNotSignedException();
    if (executor.getGrade() > this->_execGrade)
        throw Form::GradeTooLowException();
}


/* Helper functions */

std::ostream & operator<<(std::ostream & output, const Form & obj)
{
    if (obj.getSigned())
        output << "Signed ";
    else
        output << "Not signed ";
    output << "form " << obj.getName() << ": ";
    output << "sign grade (" << obj.getSignGrade() << ") and ";
    output << "execute grade (" << obj.getExecGrade() << ") ";
    output << "targeting " << obj.getTarget();
    output << std::endl;
    return (output);
}

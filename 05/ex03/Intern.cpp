#include "Intern.hpp"

/* Constructors and destructor */

Intern::Intern()
{

}

Intern::Intern(const Intern & other)
{
    (void)other;
}

Intern::~Intern()
{

}


/* Operator overloads */

Intern & Intern::operator=(const Intern & other)
{
    (void)other;
    return (*this);
}


/* Other member functions */

Form * Intern::makeForm(std::string formName, std::string target)
{
    std::string forms[3] = {"presidential request", "robotomy request", "shrubbery request"};
    Form * (*func[])(std::string) = { &createPresidentialForm, &createRobotomylForm, &createShrubberyForm};

    for (int count = 0; count < 3; count++)
        if (formName == forms[count])
            return (func[count](target));
    return (nullptr);
}


/* Helper functions */

Form * createPresidentialForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form * createRobotomylForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form * createShrubberyForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

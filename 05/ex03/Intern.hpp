#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        /* Constructors and destructor */
        Intern();
        Intern(const Intern & other);
        ~Intern();

        /* Operator overloads */
        Intern & operator=(const Intern & other);

        /* Other member functions */
        Form * makeForm(std::string formName, std::string target);
};

/* Helper functions */
Form * createPresidentialForm(std::string target);
Form * createRobotomylForm(std::string target);
Form * createShrubberyForm(std::string target);

#endif
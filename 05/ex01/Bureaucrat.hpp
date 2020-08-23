#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        /* Constructor and destructors */
        Bureaucrat(std::string name = "John Doe", int grade = 150);
        Bureaucrat(const Bureaucrat & other);
        ~Bureaucrat();

        /* Operator overloads */
        Bureaucrat & operator=(const Bureaucrat & other);

        /* Exceptions classes */
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        /* Other member functions */
        const std::string &  getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        void verifyGrade(void) const;
        void signForm(Form & obj) const;
};

/* Helper functions */
std::ostream & operator<<(std::ostream & output, const Bureaucrat & obj);

#endif
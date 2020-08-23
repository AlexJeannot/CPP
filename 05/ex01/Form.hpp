#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form;
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        const int _signGrade;
        const int _execGrade;
        bool _signed;
    public:
        /* Constructor and destructors */
        Form(std::string name = "AX001", int signGrade = 1, int execGrade = 1);
        Form(const Form & other);
        ~Form();

        /* Operator overloads */
        Form & operator=(const Form & other);

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
        int getSignGrade(void) const;
        int getExecGrade(void) const;
        bool getSigned(void) const;
        void verifyGrade(void) const;
        void beSigned(const Bureaucrat & obj);
};

/* Helper functions */
std::ostream & operator<<(std::ostream & output, const Form & obj);

#endif
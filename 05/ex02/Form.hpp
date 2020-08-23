#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form;
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string _target;
        const std::string _name;
        const int _signGrade;
        const int _execGrade;
        bool _signed;

    protected:
        void setTarget(const Form & obj);
        void setSigned(const Form & obj);

    public:
        /* Constructor and destructors */
        Form(std::string target, std::string name, int signGrade, int execGrade);
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

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        /* Other member functions */
        const std::string & getTarget () const;
        const std::string & getName(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;
        bool getSigned(void) const;
        void verifyGrade(void) const;
        void beSigned(const Bureaucrat & obj);
        virtual void execute (const Bureaucrat & executor) const = 0;
};

/* Helper functions */
std::ostream & operator<<(std::ostream & output, const Form & obj);

#endif
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        /* Constructor and destructors */
        ShrubberyCreationForm(std::string target = "default target");
        ShrubberyCreationForm(const ShrubberyCreationForm & other);
        ~ShrubberyCreationForm();

        /* Operator overloads */
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & other);

        /* Exceptions classes */
        class CannotOpenFileException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        /* Other member functions */
        void execute(const Bureaucrat & executor) const;
        void drawTree(std::ofstream & output) const;
};

#endif
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        /* Constructor and destructors */
        PresidentialPardonForm(std::string target = "default target");
        PresidentialPardonForm(const PresidentialPardonForm & other);
        ~PresidentialPardonForm();

        /* Operator overloads */
        PresidentialPardonForm & operator=(const PresidentialPardonForm & other);

        /* Other member functions */
        void execute (const Bureaucrat & executor) const;
};

#endif
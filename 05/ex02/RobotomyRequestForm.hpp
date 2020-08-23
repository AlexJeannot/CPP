#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <stdlib.h>
#include <time.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        /* Constructor and destructors */
        RobotomyRequestForm(std::string target = "default target");
        RobotomyRequestForm(const RobotomyRequestForm & other);
        ~RobotomyRequestForm();

        /* Operator overloads */
        RobotomyRequestForm & operator=(const RobotomyRequestForm & other);

        /* Other member functions */
        void execute (const Bureaucrat & executor) const;
};

#endif
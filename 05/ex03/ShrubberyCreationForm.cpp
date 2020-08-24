#include "ShrubberyCreationForm.hpp"

/* Constructor and destructors */

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form(target, "Shrubbery creation form", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : 
Form(other.getTarget(), "Shrubbery creation form", 145, 137)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}


/* Operator overloads */

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
    if (this != &other)
    {
        this->setTarget(other);
        this->setSigned(other);
    }
    return (*this);
}


/* Exceptions classes member functions */

const char* ShrubberyCreationForm::CannotOpenFileException::what() const throw()
{
    return ("Shrubbery form: Cannot open or create file");
}


/* Other member functions */

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
    Form::execute(executor);

    std::string fileTarget(this->getTarget() + "_shrubbery");
    std::ofstream oFlux(fileTarget.c_str());
    if (!(oFlux))
        throw ShrubberyCreationForm::CannotOpenFileException();
    drawTree(oFlux);
    oFlux.close();
}

void ShrubberyCreationForm::drawTree(std::ofstream & output) const
{
    for (int tree = 3; tree > 0; tree--)
    {
        for (int row = 4; row > 0; row--)
        {
            for (int col = row; col > 0; col--)
                output << " ";
            for (int col = (5 - row); col > 0; col--)
                output << "/";
            for (int col = (5 - row); col > 0; col--)
                output << "\\";
            output << std::endl;
        }
            for (int count = 0; count < 2; count++)
                output << "    ||" << std::endl;
        output << std::endl;
    }
}
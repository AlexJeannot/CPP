#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << "================== refus creation des bureaucrats ==================" << std::endl;
    try
    {
        Bureaucrat a("A", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat a("A", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "================== creation des bureaucrats ==================" << std::endl;
    Bureaucrat b1("b1", 1);
    Bureaucrat b150("b150", 150);
    std::cout << b1 << b150;

    std::cout << std::endl << "================== creation des forms ==================" << std::endl;
    ShrubberyCreationForm treeForm("outputfile");
    RobotomyRequestForm robotomyForm("Alex");
    PresidentialPardonForm presidentForm("John");
    std::cout << treeForm << robotomyForm << presidentForm;

    std::cout << std::endl << "================== refus executions (not signed) ==================" << std::endl;
    try
    {
        treeForm.execute(b1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        robotomyForm.execute(b1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        presidentForm.execute(b1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    b1.executeForm(treeForm);
    b1.executeForm(robotomyForm);
    b1.executeForm(presidentForm);

    std::cout << std::endl << "================== refus signatures (grade) ==================" << std::endl;
    try
    {
        treeForm.beSigned(b150);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        robotomyForm.beSigned(b150);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        presidentForm.beSigned(b150);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "================== signatures ==================" << std::endl;
    std::cout << treeForm;
    treeForm.beSigned(b1);
    std::cout << treeForm;
    std::cout << std::endl;

    std::cout << robotomyForm;
    b1.signForm(robotomyForm);
    std::cout << robotomyForm;
    std::cout << std::endl;

    std::cout << presidentForm;
    presidentForm.beSigned(b1);
    std::cout << presidentForm;
    std::cout << std::endl;

    std::cout << std::endl << "================== refus executions (grade) ==================" << std::endl;
    try
    {
        treeForm.execute(b150);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        robotomyForm.execute(b150);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        presidentForm.execute(b150);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    b150.executeForm(treeForm);
    b150.executeForm(robotomyForm);
    b150.executeForm(presidentForm);

    std::cout << std::endl << "================== executions ==================" << std::endl;
    try
    {
        treeForm.execute(b1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        robotomyForm.execute(b1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        presidentForm.execute(b1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    ShrubberyCreationForm secondTreeForm("secondoutputfile");
    secondTreeForm.beSigned(b1);
    std::cout << std::endl;
    b1.executeForm(secondTreeForm);
    std::cout << std::endl;
    b1.executeForm(robotomyForm);
    std::cout << std::endl;
    b1.executeForm(presidentForm);


    std::cout << std::endl << "================== tests intern ==================" << std::endl;
    Intern someRandomIntern;
    std::cout << std::endl;

    Form* ptrPresidentialForm;
    ptrPresidentialForm = someRandomIntern.makeForm("presidential request", "Alex");

    Form* ptrRobotomyForm;
    ptrRobotomyForm = someRandomIntern.makeForm("robotomy request", "Bender");

    Form* ptrShrubberyForm;
    ptrShrubberyForm = someRandomIntern.makeForm("shrubbery request", "thirdoutputfile");

    std::cout << ptrPresidentialForm << std::endl;
    std::cout << *ptrPresidentialForm << std::endl;

    std::cout << ptrRobotomyForm << std::endl;
    std::cout << *ptrRobotomyForm << std::endl;

    std::cout << ptrShrubberyForm << std::endl;
    std::cout << *ptrShrubberyForm << std::endl;

    b1.signForm(*ptrPresidentialForm);
    b1.signForm(*ptrRobotomyForm);
    b1.signForm(*ptrShrubberyForm);
    std::cout << std::endl;

    b1.executeForm(*ptrPresidentialForm);
    std::cout << std::endl;
    b1.executeForm(*ptrRobotomyForm);
    std::cout << std::endl;
    b1.executeForm(*ptrShrubberyForm);
    return (0);
}
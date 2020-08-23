#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat john;
        std::cout << john;
        Bureaucrat alex("Alex", 1);
        std::cout << alex;
        Bureaucrat pierre("Pierre", 0);
        std::cout << pierre << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "=================" << std::endl;
        Bureaucrat john;
        std::cout << john;
        john.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "=================" << std::endl;
        Bureaucrat alex("Alex", 1);
        std::cout << alex;
        alex.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
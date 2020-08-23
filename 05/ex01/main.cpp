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

    std::cout << std::endl << "================= MORE TESTS =================" << std::endl;
    try
    {
        Form a;
        std::cout << a;
        Form b("BX001", 1, 1);
        std::cout << b;
        Form c("CX001", 150, 150);
        std::cout << c;
        Form d("DX001", 1, 150);
        std::cout << d;
        Form e("EX001", 150, 1);
        std::cout << e;
        Form f("EX001", 151, 1);
        std::cout << e;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "=================" << std::endl;
        Form a("AX001", 1, 151);
        std::cout << a;

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "=================" << std::endl;
        Form a("AX001", 150, 0);
        std::cout << a;

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "=================" << std::endl;
        Form a("AX001", 0, 150);
        std::cout << a;

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "=================" << std::endl;
        Form a("AX001", 1, 150);
        std::cout << a;
        Bureaucrat alex("Alex", 2);
        std::cout << alex;
        a.beSigned(alex);

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "=================" << std::endl;
        Form a("AX001", 1, 150);
        std::cout << a;
        Bureaucrat alex("Alex", 2);
        std::cout << alex;
        alex.signForm(a);
        alex.incrementGrade();
        std::cout << alex;
        alex.signForm(a);
        std::cout << a;
        Form b("BX001", 1, 150);
        std::cout << b;
        b.beSigned(alex);
        std::cout << b;
        b.beSigned(alex);
        alex.signForm(b);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
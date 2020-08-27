#include <iostream>
#include "Span.hpp"

int main()
{

    std::cout << std::endl << "\033[38;5;40m======================== Full exception ========================\033[0m" << std::endl;
    std::cout << "----------- Empty vector -----------" << std::endl;
    Span A(0);

    try
    {
        A.addNumber(10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "----------- Not empty vector -----------" << std::endl;
    Span B(10);

    try
    {
        for (int count = 0; count < 11; count++) 
            B.addNumber(count);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }



    std::cout << std::endl << "\033[38;5;40m======================== No span exception ========================\033[0m" << std::endl;
    std::cout << "----------- Empty vector shortest span -----------" << std::endl;

    try
    {
        A.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "----------- Empty vector longest span -----------" << std::endl;

    try
    {
        A.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "----------- One int vector shortest span -----------" << std::endl;
    Span C(3);
    C.addNumber(1);

    try
    {
        C.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "----------- One int vector longest span -----------" << std::endl;

    try
    {
        C.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }



    std::cout << std::endl << "\033[38;5;40m======================== Same int ========================\033[0m" << std::endl;
    Span D(3);

    for (int count = 0; count < 3; count++)
        D.addNumber(2);

    std::cout << "----------- shortest span -----------" << std::endl;
    std::cout << D.shortestSpan() << std::endl << std::endl;

    std::cout << "----------- longest span -----------" << std::endl;
    std::cout << D.longestSpan() << std::endl;

    std::cout << std::endl << "\033[38;5;40m======================== Same int intervalle ========================\033[0m" << std::endl;
    Span E(5);

    for (int count = 0; count < 5; count++)
        E.addNumber(count);

    std::cout << "----------- shortest span -----------" << std::endl;
    std::cout << E.shortestSpan() << std::endl << std::endl;

    std::cout << "----------- longest span -----------" << std::endl;
    std::cout << E.longestSpan() << std::endl;

    std::cout << std::endl << "\033[38;5;40m======================== min/max int intervalle ========================\033[0m" << std::endl;
    Span F(2);

    F.addNumber(2147483647);
    F.addNumber(-2147483648);

    std::cout << "----------- shortest span -----------" << std::endl;
    std::cout << F.shortestSpan() << std::endl << std::endl;

    std::cout << "----------- longest span -----------" << std::endl;
    std::cout << F.longestSpan() << std::endl;

    std::cout << std::endl << "\033[38;5;40m======================== large vector ========================\033[0m" << std::endl;
    Span G(12000);

    for (int count = 0; count < 12000; count++)
        G.addNumber((count * 3));

    std::cout << "----------- shortest span -----------" << std::endl;
    std::cout << G.shortestSpan() << std::endl << std::endl;

    std::cout << "----------- longest span -----------" << std::endl;
    std::cout << G.longestSpan() << std::endl;

    return (0);
}
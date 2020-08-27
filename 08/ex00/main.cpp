#include "easyfind.hpp"
# include <vector>
# include <list>
# include <deque>

int main()
{
    std::cout << std::endl << "================ VECTOR CONTAINER ================" << std::endl;
    std::vector<int> intVector;

    for (int count = 0; count < 5; count++)
        intVector.push_back(count * 11);

    for (std::vector<int>::iterator iter = intVector.begin(); iter != intVector.end(); iter++)
        std::cout << *iter << std::endl;

    std::cout << "--------" << std::endl;
    try
    {
        easyfind(intVector, 22);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(intVector, -42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }



    std::cout << std::endl << "================ LIST CONTAINER ================" << std::endl;
    std::list<int> intList;

    for (int count = 0; count < 5; count++)
        intList.push_back(count * 10 + 5);

    for (std::list<int>::iterator iter = intList.begin(); iter != intList.end(); iter++)
        std::cout << *iter << std::endl;

    std::cout << "--------" << std::endl;
    try
    {
        easyfind(intList, 45);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(intList, -42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }



    std::cout << std::endl << "================ DEQUE CONTAINER ================" << std::endl;
    std::deque<int> intDeque;

    for (int count = 0; count < 5; count++)
        intDeque.push_back(count * 3);

    for (std::deque<int>::iterator iter = intDeque.begin(); iter != intDeque.end(); iter++)
        std::cout << *iter << std::endl;

    std::cout << "--------" << std::endl;
    try
    {
        easyfind(intDeque, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(intDeque, -42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{

    std::cout << std::endl << "============== INT ARRAY ==============" << std::endl;
    Array<int>intArray(5);

    for (int count = 0; count < intArray.size(); count ++)
        std::cout << intArray[count] << std::endl;

    for (int count = 0; count < intArray.size(); count ++)
        intArray[count] = count;

    std::cout << "---------------" << std::endl;

    for (int count = 0; count < intArray.size(); count ++)
        std::cout << intArray[count] << std::endl;


    std::cout << std::endl << "============== CHAR ARRAY ==============" << std::endl;
    Array<char>charArray(5);

    for (int count = 0; count < charArray.size(); count ++)
        charArray[count] = (65 + count);

    for (int count = 0; count < charArray.size(); count ++)
        std::cout << charArray[count] << std::endl;

    std::cout << "---------------" << std::endl;

    for (int count = 0; count < charArray.size(); count ++)
        charArray[count] = (90 - count);

    for (int count = 0; count < charArray.size(); count ++)
        std::cout << charArray[count] << std::endl;


    std::cout << std::endl << "============== STRING ARRAY ==============" << std::endl;
    Array<std::string>stringArray(5);
    std::string testArray[5] = { "test1", "test2", "test3", "test4", "test5" };

    for (int count = 0; count < charArray.size(); count ++)
        stringArray[count] = testArray[count];

    for (int count = 0; count < charArray.size(); count ++)
        std::cout << stringArray[count] << std::endl;


    std::cout << std::endl << "============== STRING ARRAY ==============" << std::endl;
    Array<int*>intPtrArray(5);

    for (int count = 0; count < charArray.size(); count ++)
        intPtrArray[count] = &intArray[count];

    for (int count = 0; count < charArray.size(); count ++)
        std::cout << intPtrArray[count] << std::endl;


    std::cout << std::endl << "============== EMPTY ARRAY ==============" << std::endl;
    Array<int>emptyIntArray;

    std::cout << "emptyIntArray.size() = " << emptyIntArray.size() << std::endl;


    std::cout << std::endl << "============== OPERATOR = ==============" << std::endl;

    emptyIntArray = intArray;
    std::cout << "emptyIntArray.size() = " << emptyIntArray.size() << std::endl;
    for (int count = 0; count < emptyIntArray.size(); count ++)
        std::cout << emptyIntArray[count] << " (" << &emptyIntArray[count] << ")" << std::endl;
    
    std::cout << std::endl << "============== COPY ARRAY ==============" << std::endl;

    Array<int>copyIntArray(emptyIntArray);
    std::cout << "copyIntArray.size() = " << copyIntArray.size() << std::endl;
    for (int count = 0; count < copyIntArray.size(); count ++)
        std::cout << copyIntArray[count] << " (" << &copyIntArray[count] << ")" << std::endl;

    std::cout << std::endl << "============== WRONG ACCESOR ARRAY ==============" << std::endl;

    try
    {
        copyIntArray[100];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        copyIntArray[-14];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        copyIntArray[10.0];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
#include <iostream>

template <typename T>
void iter(T * array, int length, void (*func)(T &))
{
    for (int count = 0; count < length; count++)
        func(array[count]);
}

template <typename T>
void display(T & elem)
{
    std::cout << elem << std::endl;
}

template <typename T>
void increment(T & elem)
{
    elem++;
}

template <typename T>
void decrement(T & elem)
{
    elem--;
}

int main()
{
    int intArray[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    char charArray[] = { 'a', 'b', 'c', 'd', 'e' };

    std::cout << std::endl << "============== INT ARRAY ==============" << std::endl;
    iter<int>(intArray, 10, &display);
    iter<int>(intArray, 10, &increment);
    std::cout << "-----------" << std::endl;
    iter<int>(intArray, 10, &display);
    iter<int>(intArray, 10, &decrement);
    std::cout << "-----------" << std::endl;
    iter<int>(intArray, 10, &display);

    std::cout << std::endl << "============== CHAR ARRAY ==============" << std::endl;
    iter<char>(charArray, 5, &display);
    iter<char>(charArray, 5, &increment);
    std::cout << "-----------" << std::endl;
    iter<char>(charArray, 5, &display);
    iter<char>(charArray, 5, &decrement);
    std::cout << "-----------" << std::endl;
    iter<char>(charArray, 5, &display);

    std::cout << std::endl << "============== INT * ARRAY ==============" << std::endl;
    
    int *intPtrArray[] = {  &intArray[0], &intArray[1], &intArray[2], &intArray[3], &intArray[4],
                            &intArray[5], &intArray[6], &intArray[7], &intArray[8], &intArray[9] };

    iter<int*>(intPtrArray, 10, &display);
    iter<int*>(intPtrArray, 10, &increment);
    std::cout << "-----------" << std::endl;
    iter<int*>(intPtrArray, 10, &display);
    iter<int*>(intPtrArray, 10, &decrement);
    std::cout << "-----------" << std::endl;
    iter<int*>(intPtrArray, 10, &display);

    return (0);
}
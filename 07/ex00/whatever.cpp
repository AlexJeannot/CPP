#include <iostream>

template <typename T>
void swap(T & a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
const T & min(const T & a, const T & b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
const T & max(const T & a, const T & b)
{
    if (a > b)
        return (a);
    return (b);
}

int main()
{
    int aInt(5);
    int bInt(10);
    double aDouble(5.5);
    double bDouble(10.10);
    char aChar('a');
    char bChar('b');
    int *aPtr = &aInt;
    int *bPtr = &bInt;

    std::cout << std::endl << "=========== SWAP ===========" << std::endl;
    std::cout << "------ INT ------" << std::endl;
    std::cout << "a = " << aInt << std::endl;
    std::cout << "b = " << bInt << std::endl;
    std::cout << std::endl;
    swap<int>(aInt, bInt);
    std::cout << "a = " << aInt << std::endl;
    std::cout << "b = " << bInt << std::endl;

    std::cout << std::endl << "------ DOUBLE ------" << std::endl;
    std::cout << "a = " << aDouble << std::endl;
    std::cout << "b = " << bDouble << std::endl;
    std::cout << std::endl;
    swap<double>(aDouble, bDouble);
    std::cout << "a = " << aDouble << std::endl;
    std::cout << "b = " << bDouble << std::endl;

    std::cout << std::endl << "------ CHAR ------" << std::endl;
    std::cout << "a = " << aChar << std::endl;
    std::cout << "b = " << bChar << std::endl;
    std::cout << std::endl;
    swap<char>(aChar, bChar);
    std::cout << "a = " << aChar << std::endl;
    std::cout << "b = " << bChar << std::endl;

    std::cout << std::endl << "------ INT * ------" << std::endl;
    std::cout << "a = " << aPtr << " ==> " << *aPtr << std::endl;
    std::cout << "b = " << bPtr << " ==> " << *bPtr <<  std::endl;
    std::cout << std::endl;
    swap<int*>(aPtr, bPtr);
    std::cout << "a = " << aPtr << " ==> " << *aPtr <<  std::endl;
    std::cout << "b = " << bPtr << " ==> " << *bPtr <<  std::endl;



    std::cout << std::endl << std::endl << "=========== MIN ===========" << std::endl;
    std::cout << "------ INT ------" << std::endl;
    std::cout << "a = " << aInt << " (" << &aInt << ")" << std::endl;
    std::cout << "b = " << bInt << " (" << &bInt << ")" << std::endl;
    std::cout << "(a,b) = " << min<int>(aInt, bInt) << " (" << &(min<int>(aInt, bInt)) << ")" << std::endl;

    std::cout << std::endl;
    int cInt(10);
    std::cout << "a = " << aInt << " (" << &aInt << ")" << std::endl;
    std::cout << "c = " << cInt << " (" << &cInt << ")" << std::endl;
    std::cout << "(a,c) = " << min<int>(aInt, cInt) << " (" << &(min<int>(aInt, cInt)) << ")" << std::endl;

    std::cout << std::endl << "------ DOUBLE ------" << std::endl;
    std::cout << "a = " << aDouble << " (" << &aDouble << ")" << std::endl;
    std::cout << "b = " << bDouble << " (" << &bDouble << ")" << std::endl;
    std::cout << "(a,b) = " << min<double>(aDouble, bDouble) << " (" << &(min<double>(aDouble, bDouble)) << ")" << std::endl;

    std::cout << std::endl;
    double cDouble(10.10);
    std::cout << "a = " << aDouble << " (" << &aDouble << ")" << std::endl;
    std::cout << "c = " << cDouble << " (" << &cDouble << ")" << std::endl;
    std::cout << "(a,c) = " << min<double>(aDouble, cDouble) << " (" << &(min<double>(aDouble, cDouble)) << ")" << std::endl;

    std::cout << std::endl << "------ CHAR ------" << std::endl;
    std::cout << "a = " << aChar << " (" << static_cast<void*>(&aChar) << ")" << std::endl;
    std::cout << "b = " << bChar << " (" << static_cast<void*>(&bChar) << ")" << std::endl;
    std::cout << "(a,b) = " << min<char>(aChar, bChar) << " (" << static_cast<void*>(const_cast<char*>(&(min<char>(aChar, bChar)))) << ")" << std::endl;

    std::cout << std::endl;
    char cChar('b');
    std::cout << "a = " << aChar << " (" << static_cast<void*>(&aChar) << ")" << std::endl;
    std::cout << "c = " << cChar << " (" << static_cast<void*>(&cChar) << ")" << std::endl;
    std::cout << "(a,c) = " << min<char>(aChar, cChar) << " (" << static_cast<void*>(const_cast<char*>(&(min<char>(aChar, cChar)))) << ")" << std::endl;

    std::cout << std::endl << "------ INT * ------" << std::endl;
    std::cout << "a = " << aPtr << " (" << &aPtr << ")" << std::endl;
    std::cout << "b = " << bPtr << " (" << &bPtr << ")" << std::endl;
    std::cout << "(a,b) = " << min<int*>(aPtr, bPtr) << " (" << &(min<int*>(aPtr, bPtr)) << ")" << std::endl;



    std::cout << std::endl << std::endl << "=========== MAX ===========" << std::endl;
    std::cout << "------ INT ------" << std::endl;
    std::cout << "a = " << aInt << " (" << &aInt << ")" << std::endl;
    std::cout << "b = " << bInt << " (" << &bInt << ")" << std::endl;
    std::cout << "(a,b) = " << max<int>(aInt, bInt) << " (" << &(max<int>(aInt, bInt)) << ")" << std::endl;

    std::cout << std::endl;
    std::cout << "a = " << aInt << " (" << &aInt << ")" << std::endl;
    std::cout << "c = " << cInt << " (" << &cInt << ")" << std::endl;
    std::cout << "(a,c) = " << max<int>(aInt, cInt) << " (" << &(max<int>(aInt, cInt)) << ")" << std::endl;

    std::cout << std::endl << "------ DOUBLE ------" << std::endl;
    std::cout << "a = " << aDouble << " (" << &aDouble << ")" << std::endl;
    std::cout << "b = " << bDouble << " (" << &bDouble << ")" << std::endl;
    std::cout << "(a,b) = " << max<double>(aDouble, bDouble) << " (" << &(max<double>(aDouble, bDouble)) << ")" << std::endl;
    
    std::cout << std::endl;
    std::cout << "a = " << aDouble << " (" << &aDouble << ")" << std::endl;
    std::cout << "c = " << cDouble << " (" << &cDouble << ")" << std::endl;
    std::cout << "(a,c) = " << max<double>(aDouble, cDouble) << " (" << &(max<double>(aDouble, cDouble)) << ")" << std::endl;

    std::cout << std::endl << "------ CHAR ------" << std::endl;
    std::cout << "a = " << aChar << " (" << static_cast<void*>(&aChar) << ")" << std::endl;
    std::cout << "b = " << bChar << " (" << static_cast<void*>(&bChar) << ")" << std::endl;
    std::cout << "(a,b) = " << max<char>(aChar, bChar) << " (" << static_cast<void*>(const_cast<char*>(&(max<char>(aChar, bChar)))) << ")" << std::endl;

    std::cout << std::endl;
    std::cout << "a = " << aChar << " (" << static_cast<void*>(&aChar) << ")" << std::endl;
    std::cout << "c = " << cChar << " (" << static_cast<void*>(&cChar) << ")" << std::endl;
    std::cout << "(a,c) = " << max<char>(aChar, cChar) << " (" << static_cast<void*>(const_cast<char*>(&(max<char>(aChar, cChar)))) << ")" << std::endl;

    std::cout << std::endl << "------ INT * ------" << std::endl;
    std::cout << "a = " << aPtr << " (" << &aPtr << ")" << std::endl;
    std::cout << "b = " << bPtr << " (" << &bPtr << ")" << std::endl;
    std::cout << "(a,b) = " << max<int*>(aPtr, bPtr) << " (" << &(max<int*>(aPtr, bPtr)) << ")" << std::endl;

    return (0);
}
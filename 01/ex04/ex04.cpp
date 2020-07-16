#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string *strPtr;
    std::string &strRef = str;

    str = "HI THIS IS BRAIN";
    strPtr = &str;

    std::cout << *strPtr << std::endl;
    std::cout << strRef << std::endl;
    return (0);
}
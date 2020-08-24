#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}

int main()
{
    A classA;
    B classB;
    C classC;

    identify_from_pointer(&classA);
    identify_from_pointer(&classB);
    identify_from_pointer(&classC);

    identify_from_reference(classA);
    identify_from_reference(classB);
    identify_from_reference(classC);

    return (0);
}
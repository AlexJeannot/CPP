#include "Fixed.hpp"

int main(void) 
{
    /*
    Fixed a(20);
    Fixed b(4.44f);
    Fixed plusResult;
    Fixed minusResult;
    Fixed mulResult;
    Fixed divResult;

    plusResult = a + b;
    minusResult = a - b;
    mulResult = a * b;
    divResult = a / b;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << "+   = " << plusResult << std::endl;
    std::cout << "-   = " << minusResult << std::endl;
    std::cout << "*   = " << mulResult << std::endl;
    std::cout << "/   = " << divResult << std::endl;
    std::cout << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "post a++ = " << a << std::endl;
    std::cout << "--a = " << --a << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    std::cout << "post a-- = " << a << std::endl;

    Fixed c;
    Fixed d;

    c = min(a, b);
    std::cout << "c = " << c << std::endl;
    c = max(a, b);
    std::cout << "c = " << c << std::endl;

    d = c.min(a, b);
    std::cout << "d = " << d << std::endl;
    d = c.max(a, b);
    std::cout << "d = " << d << std::endl;
    */

    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    return (0);
}
#include "Fixed.hpp"

Fixed::Fixed(void) : m_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& instanceRef)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = instanceRef;
}

Fixed::Fixed(const int p_value)
{
    std::cout << "Int constructor called" << std::endl;
    m_value = p_value << m_bits;
}

Fixed::Fixed(const float p_value)
{
    std::cout << "Float constructor called" << std::endl;
    m_value = (int)roundf(p_value * (1 << m_bits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& instanceRef)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &instanceRef)
        m_value = instanceRef.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (m_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    m_value = raw;
}

int Fixed::toInt(void) const
{
    return (m_value >> m_bits);
}

float Fixed::toFloat(void) const
{
    return ((float)m_value / (float)(1 << m_bits));
}

std::ostream & operator<<(std::ostream& output, Fixed const& fixedNumber)
{
    output << fixedNumber.toFloat();
    return (output);
}
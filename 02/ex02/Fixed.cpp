#include "Fixed.hpp"

Fixed::Fixed(void) : m_value(0)
{

}

Fixed::Fixed(const Fixed& instanceRef)
{
    *this = instanceRef;
}

Fixed::Fixed(const int p_value)
{
    m_value = p_value << m_bits;
}

Fixed::Fixed(const float p_value)
{
    m_value = (int)roundf(p_value * (1 << m_bits));
}

Fixed::~Fixed(void)
{

}

int Fixed::getRawBits(void) const
{
    return (m_value);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed & Fixed::operator=(const Fixed& instanceRef)
{
    if (this != &instanceRef)
        m_value = instanceRef.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(const Fixed& instanceRef)
{
    Fixed newInstance(*this);

    newInstance.m_value += instanceRef.m_value;
    return (newInstance);
}

Fixed Fixed::operator-(const Fixed& instanceRef)
{
    Fixed newInstance(*this);

    newInstance.m_value -= instanceRef.m_value;
    return (newInstance);
}

Fixed Fixed::operator*(const Fixed& instanceRef)
{
    Fixed newInstance(*this);
    long factorOne;
    long factorTwo;
    long product;

    factorOne = (long)m_value;
    factorTwo = (long)instanceRef.m_value;
    product = factorOne * factorTwo;
    newInstance.m_value = product / (1 << m_bits);
    return (newInstance);
}

Fixed Fixed::operator/(const Fixed& instanceRef)
{
    Fixed newInstance(*this);
    float quotient;

    quotient = (float)m_value / (float)instanceRef.m_value;
    newInstance.m_value = (int)roundf(quotient * (1 << m_bits));
    return (newInstance);
}

Fixed & Fixed::operator++()
{
    m_value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed copy(*this);

    ++(*this);
    return (copy);
}

Fixed & Fixed::operator--()
{
    m_value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed copy(*this);

    --(*this);
    return (copy);
}

bool Fixed::operator>(Fixed const& instanceCmp) const
{
    if (this->m_value > instanceCmp.m_value)
        return (true);
    return (false);
}

bool Fixed::operator<(Fixed const& instanceCmp) const
{
    if (this->m_value < instanceCmp.m_value)
        return (true);
    return (false);
}

bool Fixed::operator>=(Fixed const& instanceCmp) const
{
    if (this->m_value >= instanceCmp.m_value)
        return (true);
    return (false);
}

bool Fixed::operator<=(Fixed const& instanceCmp) const
{
    if (this->m_value <= instanceCmp.m_value)
        return (true);
    return (false);
}

bool Fixed::operator==(Fixed const& instanceCmp) const
{
    if (this->m_value == instanceCmp.m_value)
        return (true);
    return (false);
}

bool Fixed::operator!=(Fixed const& instanceCmp) const
{
    if (this->m_value != instanceCmp.m_value)
        return (true);
    return (false);
}

std::ostream & operator<<(std::ostream& output, Fixed const& fixedNumber)
{
    output << fixedNumber.toFloat();
    return (output);
}

Fixed & min(Fixed & firstInstance, Fixed & secondInstance)
{
    return (Fixed::min(firstInstance, secondInstance));
}

Fixed const& min(Fixed const& firstInstance, Fixed const& secondInstance)
{
    return (Fixed::min(firstInstance, secondInstance));
}

Fixed & Fixed::min(Fixed & firstInstance, Fixed & secondInstance)
{
    if (firstInstance < secondInstance)
        return (firstInstance);
    return (secondInstance);
}

Fixed const& Fixed::min(Fixed const& firstInstance, Fixed const& secondInstance)
{
    if (firstInstance < secondInstance)
        return (firstInstance);
    return (secondInstance);
}

Fixed & max(Fixed & firstInstance, Fixed & secondInstance)
{
    return (Fixed::max(firstInstance, secondInstance));
}

Fixed const& max(Fixed const& firstInstance, Fixed const& secondInstance)
{
    return (Fixed::max(firstInstance, secondInstance));
}

Fixed & Fixed::max(Fixed & firstInstance, Fixed & secondInstance)
{
    if (firstInstance > secondInstance)
        return (firstInstance);
    return (secondInstance);
}

Fixed const& Fixed::max(Fixed const& firstInstance, Fixed const& secondInstance)
{
    if (firstInstance > secondInstance)
        return (firstInstance);
    return (secondInstance);
}


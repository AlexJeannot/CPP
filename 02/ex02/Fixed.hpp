#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int m_value;
        static const int m_bits = 8;

    public:
        // Constructors
        Fixed(void);
        Fixed(const Fixed& instanceRef);
        Fixed(const int p_value);
        Fixed(const float p_value);

        // Destructor
        ~Fixed(void);

        // Value management
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;

        // Overloads arithmetiques
        Fixed & operator=(const Fixed& instanceRef);
        Fixed operator+(const Fixed& instanceRef);
        Fixed operator-(const Fixed& instanceRef);
        Fixed operator*(const Fixed& instanceRef);
        Fixed operator/(const Fixed& instanceRef);

        // Overloads arithmetiques
        Fixed & operator++();
        Fixed operator++(int);
        Fixed & operator--();
        Fixed operator--(int);

        // Overloads comparaisons
        bool operator>(Fixed const& instanceCmp) const;
        bool operator<(Fixed const& instanceCmp) const;
        bool operator>=(Fixed const& instanceCmp) const;
        bool operator<=(Fixed const& instanceCmp) const;
        bool operator==(Fixed const& instanceCmp) const;
        bool operator!=(Fixed const& instanceCmp) const;

        static Fixed & min(Fixed & firstInstance, Fixed & secondInstance);
        static Fixed const& min(Fixed const& firstInstance, Fixed const& secondInstance);
        static Fixed & max(Fixed & firstInstance, Fixed & secondInstance);
        static Fixed const& max(Fixed const& firstInstance, Fixed const& secondInstance);
};

std::ostream & operator<<(std::ostream& output, Fixed const& fixedNumber);
Fixed & min(Fixed & firstInstance, Fixed & secondInstance);
Fixed const& min(Fixed const& firstInstance, Fixed const& secondInstance);
Fixed & max(Fixed & firstInstance, Fixed & secondInstance);
Fixed const& max(Fixed const& firstInstance, Fixed const& secondInstance);

#endif
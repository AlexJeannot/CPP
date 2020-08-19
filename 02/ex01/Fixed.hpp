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
        Fixed(void);
        Fixed(const Fixed& instanceRef);
        Fixed(const int p_value);
        Fixed(const float p_value);
        ~Fixed(void);
        Fixed &operator=(const Fixed& instanceRef);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream & operator<<(std::ostream& output, Fixed const& fixedNumber);

#endif
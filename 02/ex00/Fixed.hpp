#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int m_value;
        static const int bits = 8;

    public:
        Fixed(void);
        Fixed(const Fixed& instanceRef);
        ~Fixed(void);
        Fixed &operator=(const Fixed& instanceRef);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
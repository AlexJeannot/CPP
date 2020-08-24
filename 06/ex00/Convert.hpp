#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <limits>
# include <cmath> 
# include <ctgmath>

class Convert
{
    public:
        /* Constructors and destructor */
        Convert();
        Convert(const Convert & other);
        ~Convert();

        /* Operator overloads */
        Convert & operator=(const Convert & other);

        /* Other member functions */
        double interpret(std::string input) const;
        static std::string toChar(const double & input);
        static std::string toInt(const double & input);
        static std::string toFloat(const double & input);
        static std::string toDouble(const double & input);
        void display(std::string input) const;
};

#endif
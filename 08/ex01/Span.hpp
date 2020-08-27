#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdlib.h>
# include <iostream>

class Span
{
    private:
        std::vector<int> _intVector;
        unsigned int _maxSize;

    public:
        /* Constructors and destructors */
        Span(unsigned int N);
        Span(const Span & other);
        ~Span();

        /* Operator overloads */
        Span & operator=(const Span & other);

        /* Class exceptions */
        class vectorIsFull : public std::exception
        {
            virtual const char* what() const throw();
        };

        class noSpanAvailable : public std::exception
        {
            virtual const char* what() const throw();
        };

        /* Other member functions */
        void addNumber(int input);
        long shortestSpan(void) const;
        long longestSpan(void) const;
};

#endif
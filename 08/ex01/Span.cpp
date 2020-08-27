#include "Span.hpp"

/* Constructors and destructors */

Span::Span(unsigned int N) : _maxSize(N)
{

}

Span::Span(const Span & other) : _intVector(other._intVector), _maxSize(other._maxSize)
{

}

Span::~Span()
{

}


/* Operator overloads */

Span & Span::operator=(const Span & other)
{
    if (this != &other)
    {
        this->_intVector = other._intVector;
        this->_maxSize = other._maxSize;
    }
    return (*this);
}


/* Exceptions member functions */
const char* Span::vectorIsFull::what() const throw()
{
    return ("Exception: int vector is full");
}

const char* Span::noSpanAvailable::what() const throw()
{
    return ("Exception: no span available");
}


/* Other member functions */

void Span::addNumber(int input)
{
    if (this->_intVector.size() < this->_maxSize)
        this->_intVector.push_back(input);
    else
        throw Span::vectorIsFull();
}

long Span::shortestSpan(void) const
{
    bool init(false);
    long result(0);

    if (this->_intVector.size() > 1)
    {
        for (std::vector<int>::const_iterator firstIter = this->_intVector.begin();
            firstIter != this->_intVector.end(); firstIter++)
        {
            for (std::vector<int>::const_iterator secondIter = this->_intVector.begin();
                secondIter != this->_intVector.end(); secondIter++)
            {
                if (firstIter == secondIter)
                    continue ;
                else if (std::labs(static_cast<long>(*firstIter) - static_cast<long>(*secondIter)) < result || !init)
                {
                    if (!init)
                        init = true;
                    result = std::labs(static_cast<long>(*firstIter) - static_cast<long>(*secondIter));
                }
            }
        }
        return (result);
    }
    else
        throw Span::noSpanAvailable();
}

long Span::longestSpan(void) const
{
    bool init(false);
    long result(0);

    if (this->_intVector.size() > 1)
    {
        for (std::vector<int>::const_iterator firstIter = this->_intVector.begin();
            firstIter != this->_intVector.end(); firstIter++)
        {
            for (std::vector<int>::const_iterator secondIter = this->_intVector.begin();
                secondIter != this->_intVector.end(); secondIter++)
            {
                if (firstIter == secondIter)
                    continue ;
                else if (std::labs(static_cast<long>(*firstIter) - static_cast<long>(*secondIter)) > result || !init)
                {
                    if (!init)
                        init = true;
                    result = std::labs(static_cast<long>(*firstIter) - static_cast<long>(*secondIter));
                }
            }
        }
        return (result);
    }
    else
        throw Span::noSpanAvailable();
}
#include "mutantstack.hpp"

/* Constructors and destructor */

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & other) : std::stack<T>(other)
{

}

template <typename T>
MutantStack<T>::~MutantStack()
{

}


/* Operator overloads */

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> & other)
{
    if (this != &other)
        this->c = other.c;
    return (*this);
}


/* member functions on (const) iterator */

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return (MutantStack<T>::iterator(&this->top() - (this->size() - 1)));
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void)
{
    return (MutantStack<T>::const_iterator(&this->top() - (this->size() - 1)));
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return (MutantStack<T>::iterator(&this->top() + 1));
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend(void)
{
    return (MutantStack<T>::const_iterator(&this->top() + 1));
}


/* member functions on reverse (const) iterator */

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
    return (MutantStack<T>::reverse_iterator(&this->top()));
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin(void)
{
    return (MutantStack<T>::const_reverse_iterator(&this->top()));
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
    return (MutantStack<T>::reverse_iterator(&this->top() - this->size()));
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend(void)
{
    return (MutantStack<T>::const_reverse_iterator(&this->top() - this->size()));
}


/*
* ITERATOR
*/


/* Iterator constructors and destructor */

template <typename T>
MutantStack<T>::iterator::iterator(T * elem) : _iterator(elem)
{

}

template <typename T>
MutantStack<T>::iterator::iterator(const iterator & other) : _iterator(other._iterator)
{

}
template <typename T>
MutantStack<T>::iterator::~iterator()
{

}

/* Iterator operator overloads */

template <typename T>
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator=(const iterator & other)
{
    if (this != &other)
        this->_iterator = other._iterator;
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator++()
{
    this->_iterator++;
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator++(int)
{
    typename MutantStack<T>::iterator tmp(*this);
    this->_iterator++;
    return (tmp);
}

template <typename T>
typename MutantStack<T>::iterator & MutantStack<T>::iterator::operator--()
{
    this->_iterator--;
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator--(int)
{
    typename MutantStack<T>::iterator tmp(*this);
    this->_iterator--;
    return (tmp);
}

template <typename T>
T & MutantStack<T>::iterator::operator*() const
{
    return (*this->_iterator);
}

template <typename T>
typename MutantStack<T>::iterator * MutantStack<T>::iterator::operator&()
{
    return (this);
}

template <typename T>
bool MutantStack<T>::iterator::operator==(const iterator & other) const
{
    return (this->_iterator == other._iterator);
}

template <typename T>
bool MutantStack<T>::iterator::operator!=(const iterator & other) const
{
    return (this->_iterator != other._iterator);
}


/*
* CONST ITERATOR
*/


/* Const iterator constructors and destructor */

template <typename T>
MutantStack<T>::const_iterator::const_iterator(T * elem) : _iterator(elem)
{

}

template <typename T>
MutantStack<T>::const_iterator::const_iterator(const const_iterator & other) : _iterator(other._iterator)
{

}
template <typename T>
MutantStack<T>::const_iterator::~const_iterator()
{

}

/* Const iterator operator overloads */

template <typename T>
typename MutantStack<T>::const_iterator & MutantStack<T>::const_iterator::operator=(const const_iterator & other)
{
    if (this != &other)
        this->_iterator = other._iterator;
    return (*this);
}

template <typename T>
typename MutantStack<T>::const_iterator & MutantStack<T>::const_iterator::operator++()
{
    this->_iterator++;
    return (*this);
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::const_iterator::operator++(int)
{
    typename MutantStack<T>::const_iterator tmp(*this);
    this->_iterator++;
    return (tmp);
}

template <typename T>
typename MutantStack<T>::const_iterator & MutantStack<T>::const_iterator::operator--()
{
    this->_iterator--;
    return (*this);
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::const_iterator::operator--(int)
{
    typename MutantStack<T>::const_iterator tmp(*this);
    this->_iterator--;
    return (tmp);
}

template <typename T>
const T & MutantStack<T>::const_iterator::operator*() const
{
    return (*this->_iterator);
}

template <typename T>
typename MutantStack<T>::const_iterator * MutantStack<T>::const_iterator::operator&()
{
    return (this);
}

template <typename T>
bool MutantStack<T>::const_iterator::operator==(const const_iterator & other) const
{
    return (this->_iterator == other._iterator);
}

template <typename T>
bool MutantStack<T>::const_iterator::operator!=(const const_iterator & other) const
{
    return (this->_iterator != other._iterator);
}



/*
* REVERSE ITERATOR
*/


/* Reverse iterator constructors and destructor */

template <typename T>
MutantStack<T>::reverse_iterator::reverse_iterator(T * elem) : _iterator(elem)
{

}

template <typename T>
MutantStack<T>::reverse_iterator::reverse_iterator(const reverse_iterator & other) : _iterator(other._iterator)
{

}
template <typename T>
MutantStack<T>::reverse_iterator::~reverse_iterator()
{

}

/* Reverse iterator operator overloads */

template <typename T>
typename MutantStack<T>::reverse_iterator & MutantStack<T>::reverse_iterator::operator=(const reverse_iterator & other)
{
    if (this != &other)
        this->_iterator = other._iterator;
    return (*this);
}

template <typename T>
typename MutantStack<T>::reverse_iterator & MutantStack<T>::reverse_iterator::operator++()
{
    this->_iterator--;
    return (*this);
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::reverse_iterator::operator++(int)
{
    typename MutantStack<T>::reverse_iterator tmp(*this);
    this->_iterator--;
    return (tmp);
}

template <typename T>
typename MutantStack<T>::reverse_iterator & MutantStack<T>::reverse_iterator::operator--()
{
    this->_iterator++;
    return (*this);
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::reverse_iterator::operator--(int)
{
    typename MutantStack<T>::reverse_iterator tmp(*this);
    this->_iterator++;
    return (tmp);
}

template <typename T>
T & MutantStack<T>::reverse_iterator::operator*() const
{
    return (*this->_iterator);
}

template <typename T>
typename MutantStack<T>::reverse_iterator * MutantStack<T>::reverse_iterator::operator&()
{
    return (this);
}

template <typename T>
bool MutantStack<T>::reverse_iterator::operator==(const reverse_iterator & other) const
{
    return (this->_iterator == other._iterator);
}

template <typename T>
bool MutantStack<T>::reverse_iterator::operator!=(const reverse_iterator & other) const
{
    return (this->_iterator != other._iterator);
}


/*
* CONST REVERSE ITERATOR
*/


/* Const reverse iterator constructors and destructor */

template <typename T>
MutantStack<T>::const_reverse_iterator::const_reverse_iterator(T * elem) : _iterator(elem)
{

}

template <typename T>
MutantStack<T>::const_reverse_iterator::const_reverse_iterator(const const_reverse_iterator & other) : _iterator(other._iterator)
{

}
template <typename T>
MutantStack<T>::const_reverse_iterator::~const_reverse_iterator()
{

}

/* Const reverse iterator operator overloads */

template <typename T>
typename MutantStack<T>::const_reverse_iterator & MutantStack<T>::const_reverse_iterator::operator=(const const_reverse_iterator & other)
{
    if (this != &other)
        this->_iterator = other._iterator;
    return (*this);
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator & MutantStack<T>::const_reverse_iterator::operator++()
{
    this->_iterator--;
    return (*this);
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::const_reverse_iterator::operator++(int)
{
    typename MutantStack<T>::const_reverse_iterator tmp(*this);
    this->_iterator--;
    return (tmp);
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator & MutantStack<T>::const_reverse_iterator::operator--()
{
    this->_iterator++;
    return (*this);
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::const_reverse_iterator::operator--(int)
{
    typename MutantStack<T>::const_reverse_iterator tmp(*this);
    this->_iterator++;
    return (tmp);
}

template <typename T>
const T & MutantStack<T>::const_reverse_iterator::operator*() const
{
    return (*this->_iterator);
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator * MutantStack<T>::const_reverse_iterator::operator&()
{
    return (this);
}

template <typename T>
bool MutantStack<T>::const_reverse_iterator::operator==(const const_reverse_iterator & other) const
{
    return (this->_iterator == other._iterator);
}

template <typename T>
bool MutantStack<T>::const_reverse_iterator::operator!=(const const_reverse_iterator & other) const
{
    return (this->_iterator != other._iterator);
}
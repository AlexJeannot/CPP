#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
    private:
        T * _array;
        int _size;
    public:
        /* Constructor and destructor */
        Array(unsigned int size = 0) : _array(new T[size]()), _size(size) {};

        Array(const Array & other) : _size(other._size)
        {
            this->_array = new T[other._size]();
            for (int count = 0; count < other._size; count++)
                this->_array[count] = other._array[count];
        };

        ~Array()
        {
            delete[] this->_array;
        };

        /* Operator overloads */
        Array & operator=(const Array & other)
        {
            if (this != &other)
            {
                delete[] this->_array;
                this->_array = new T[other._size]();
                for (int count = 0; count < other._size; count++)
                    this->_array[count] = other._array[count];
                this->_size = other._size;
            }
            return (*this);
        }

        T & operator[](int index)
        {
            if (this->_size <= index || index < 0)
                throw std::out_of_range("Index out of range");
            return (this->_array[index]);
        }

        /* Other member functions */
        int size(void) const
        {
            return (this->_size);
        }



};

#endif
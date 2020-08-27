#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T> 
class MutantStack : public std::stack<T>
{
    public:
        /* Constructors and destructor */
        MutantStack();
        MutantStack(const MutantStack & other);
        virtual ~MutantStack();

        /* Operator overloads */
        MutantStack<T> & operator=(const MutantStack<T> & other);

        /* Iterator class */

        class iterator
        {
            private:
                T * _iterator;

            public:
                /* Constructors and destructor */
                iterator(T * elem = nullptr);
                iterator(const iterator & other);
                virtual ~iterator();

                /* Operator overloads */
                iterator & operator=(const iterator & other);
                iterator & operator++();
                iterator operator++(int);
                iterator & operator--();
                iterator operator--(int);
                T & operator*() const;
                iterator * operator&();
                bool operator==(const iterator & other) const;
                bool operator!=(const iterator & other) const;
        };


        /* Constant iterator class */

        class const_iterator
        {
            private:
                T * _iterator;

            public:
                /* Constructors and destructor */
                const_iterator(T * elem = nullptr);
                const_iterator(const const_iterator & other);
                virtual ~const_iterator();

                /* Operator overloads */
                const_iterator & operator=(const const_iterator & other);
                const_iterator & operator++();
                const_iterator operator++(int);
                const_iterator & operator--();
                const_iterator operator--(int);
                const T & operator*() const;
                const_iterator * operator&();
                bool operator==(const const_iterator & other) const;
                bool operator!=(const const_iterator & other) const;
        };


        /* Reverse iterator class */

        class reverse_iterator
        {
            private:
                T * _iterator;

            public:
                /* Constructors and destructor */
                reverse_iterator(T * elem = nullptr);
                reverse_iterator(const reverse_iterator & other);
                virtual ~reverse_iterator();

                /* Operator overloads */
                reverse_iterator & operator=(const reverse_iterator & other);
                reverse_iterator & operator++();
                reverse_iterator operator++(int);
                reverse_iterator & operator--();
                reverse_iterator operator--(int);
                T & operator*() const;
                reverse_iterator * operator&();
                bool operator==(const reverse_iterator & other) const;
                bool operator!=(const reverse_iterator & other) const;
        };


        /* Constant reverse iterator class */

        class const_reverse_iterator
        {
            private:
                T * _iterator;

            public:
                /* Constructors and destructor */
                const_reverse_iterator(T * elem = nullptr);
                const_reverse_iterator(const const_reverse_iterator & other);
                virtual ~const_reverse_iterator();

                /* Operator overloads */
                const_reverse_iterator & operator=(const const_reverse_iterator & other);
                const_reverse_iterator & operator++();
                const_reverse_iterator operator++(int);
                const_reverse_iterator & operator--();
                const_reverse_iterator operator--(int);
                const T & operator*() const;
                const_reverse_iterator * operator&();
                bool operator==(const const_reverse_iterator & other) const;
                bool operator!=(const const_reverse_iterator & other) const;
        };

        /* Other member functions */
        iterator begin(void);
        const_iterator cbegin(void);
        iterator end(void);
        const_iterator cend(void);

        reverse_iterator rbegin(void);
        const_reverse_iterator crbegin(void);
        reverse_iterator rend(void);
        const_reverse_iterator crend(void);

};

# include "mutantstack.ipp"

#endif
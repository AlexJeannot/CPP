#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>


/* Exception class */

class occurrenceNotFound : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Exception: occurrence not found";
        }
};


/* Template function */

template <template <typename, typename> class T>
void easyfind(const T<int, std::allocator<int> > & container, int isSearch)
{
    int count(0);

    for (typename T <int, std::allocator<int> >::const_iterator iter = container.begin();
        iter != container.end(); iter++)
    {        
        if (*iter == isSearch)
        {
            std::cout << "int (" << isSearch << ") ";
            std::cout << "found at index " << count << std::endl;
            return ;
        }
        count++;
    }
    throw occurrenceNotFound();
}

#endif
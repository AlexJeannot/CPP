#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact         m_list[8];
        unsigned int    m_index;
    
    public:
        PhoneBook(void);
        int    getIndex(void) const;

        /* ADD METHODS */
        void            addContact(void);

        /* SEARCH METHODS */
        void            displayContact(unsigned int const& index) const;
        void            displayListContact(void) const;
};

#endif
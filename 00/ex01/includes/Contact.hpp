#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string m_firstName;
        std::string m_lastName;
        std::string m_nickname;
        std::string m_login;
        std::string m_postalAdress;
        std::string m_emailAdress;
        std::string m_phoneNumber;
        std::string m_birthDate;
        std::string m_favoriteMeal;
        std::string m_underwearColor;
        std::string m_darkestSecret;
    
    public:
        Contact(void);

        /* ADD METHODS */
        void        addInformationsContact(void);
        std::string askInformations(std::string const& info, std::string const& format) const;
        bool        checkInformations(std::string const& info, std::string const& input) const;
        bool        checkTextInformations(std::string const& input) const;
        bool        checkEmailInformations(std::string const& input) const;
        bool        checkPhoneInformations(std::string const& input) const;
        bool        checkBirthInformations(std::string const&  input) const;
        bool        isDigit(char const& c) const;

        /* SEARCH METHODS */
        void        displayContact(void) const;
        void        displayListContact(unsigned int const &index) const;
        void        displaySpace(int const& nb) const;
        void        displayListInformation(std::string const& info) const;
};

#endif
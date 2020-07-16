#include "../includes/Contact.hpp"

Contact::Contact(void)
{

}

void Contact::addInformationsContact(void)
{
    std::cout << "Please complete the following informations" << std::endl << std::endl;
    //std::cout << "test" << std::endl;

    m_firstName = this->askInformations("first name", "25 characters max");
    m_lastName = this->askInformations("last name", "25 characters max");
    m_nickname = this->askInformations("nickname", "25 characters max");
    m_login = this->askInformations("login", "25 characters max");
    m_postalAdress = this->askInformations("postal adress", "No format specified");
    m_emailAdress = this->askInformations("email adress", "example@example.com");
    m_phoneNumber = this->askInformations("phone number", "0611223344");
    m_birthDate = this->askInformations("birth date", "DD/MM/YY");
    m_favoriteMeal = this->askInformations("favorite meal", "25 characters max");
    m_underwearColor = this->askInformations("underwear color", "25 characters max");
    m_darkestSecret = this->askInformations("darkest secret", "25 characters max");
    
}

std::string Contact::askInformations(std::string const& info, std::string const& format) const
{
    bool check(false);
    std::string input;

    while (check == false)
    {
        std::cout << "Enter your " << info;
        std::cout << " (format : " << format << ") :" << std::endl << "> ";
        std::getline(std::cin, input);
        check = this->checkInformations(info, input);
        if (check == false)
            std::cout << "\033[38;5;160m" << "Not a valid " << info << " !" << "\033[0m" << std::endl << std::endl;
    }
    std::cout << std::endl;
    return (input);
}

bool Contact::checkInformations(std::string const& info, std::string const& input) const
{
    if (info == "first name" || info == "last name" || info == "nickname" ||
        info == "login" || info == "favorite meal" || info == "underwear color" ||
        info == "darkest secret")
        return (this->checkTextInformations(input));
    else if (info == "email adress")
        return (this->checkEmailInformations(input));
    else if (info == "phone number")
        return (this->checkPhoneInformations(input));
    else if (info == "birth date")
        return (this->checkBirthInformations(input));
    else
        return (true);

}
bool Contact::checkTextInformations(std::string const& input) const
{
    if (input[0] && input.size() <= 25)
        return (true);
    return (false);
}

bool Contact::checkEmailInformations(std::string const& input) const
{
    unsigned int count;

    for (count = 0; input[count]; count++)
    {
        if (input[count] == '@')
            return (true);
    }
    return (false);
}

bool Contact::checkPhoneInformations(std::string const& input) const
{
    unsigned int count;

    if (input.size() == 10)
    {
        for (count = 0; input[count]; count++)
        {
            if (!(this->isDigit(input[count])))
                return (false);
        }
        return (true);
    }
    return (false);
}

bool Contact::checkBirthInformations(std::string const& input) const
{
    if (input.size() == 8 
        && this->isDigit(input[0]) && this->isDigit(input[1]) && this->isDigit(input[3])
        && this->isDigit(input[4]) && this->isDigit(input[6]) && this->isDigit(input[7])
        && input[2] == '/' && input[5] == '/')
        return (true);
    return (false);
}

bool Contact::isDigit(char const& c) const
{
    if (c > 47 && c < 58)
        return (true);
    return (false);
}

void Contact::displayContact(void) const
{
    std::cout << std::endl;
    std::cout << "\033[38;5;39m" << "First name: " << "\033[0m" << m_firstName << std::endl;
    std::cout << "\033[38;5;39m" << "Last name: " << "\033[0m" << m_lastName << std::endl;
    std::cout << "\033[38;5;39m" << "Nickname: " << "\033[0m" << m_nickname << std::endl;
    std::cout << "\033[38;5;39m" << "Login: " << "\033[0m" << m_login << std::endl;
    std::cout << "\033[38;5;39m" << "Postal adress: " << "\033[0m" << m_postalAdress << std::endl;
    std::cout << "\033[38;5;39m" << "Email adress: " << "\033[0m" << m_emailAdress << std::endl;
    std::cout << "\033[38;5;39m" << "Phone number: " << "\033[0m" << m_phoneNumber << std::endl;
    std::cout << "\033[38;5;39m" << "Birth date: " << "\033[0m" << m_birthDate << std::endl;
    std::cout << "\033[38;5;39m" << "Favorite meal: " << "\033[0m" << m_favoriteMeal << std::endl;
    std::cout << "\033[38;5;39m" << "Underwear color: " << "\033[0m" << m_underwearColor << std::endl;
    std::cout << "\033[38;5;39m" << "Darkest secret: " << "\033[0m" << m_darkestSecret << std::endl;
}

void Contact::displayListContact(unsigned int const &index) const
{
    unsigned int count;
    unsigned int size;

    std::cout << "|" << "    " << index << "     " << "|";
    this->displayListInformation(m_firstName);
    this->displayListInformation(m_lastName);
    this->displayListInformation(m_nickname);
    std::cout << std::endl;
}

void Contact::displayListInformation(std::string const& info) const
{
    unsigned int count;
    unsigned int size;

    size = info.size();
    if (size <= 10)
    {
        this->displaySpace(((10 - size) / 2) + ((10 - size) % 2));
        std::cout << info;
        this->displaySpace((10 - size) / 2);
    }
    else
        std::cout << info.substr(0, 9) << ".";
    std::cout << "|";
}

void Contact::displaySpace(unsigned int const& nb) const
{
    unsigned int count;

    for (count = 0; count < nb; count++)
        std::cout << " ";
}
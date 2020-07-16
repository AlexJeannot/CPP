#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) : m_index(0)
{

}

unsigned int PhoneBook::getIndex(void) const
{
    return (m_index);
}

void PhoneBook::addContact(void)
{
    m_list[m_index].addInformationsContact();
    m_index++;
}

void PhoneBook::displayListContact(void) const
{
    unsigned int count;

    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|" << "\033[38;5;118m" << "  INDEX   " << "\033[0m" << "|";
    std::cout << "\033[38;5;118m" << "FIRST NAME" << "\033[0m" << "|";
    std::cout << "\033[38;5;118m" << " LAST NAME" << "\033[0m" << "|";
    std::cout << "\033[38;5;118m" << " NICKNAME " << "\033[0m" << "|" << std::endl;
    std::cout << "_____________________________________________" << std::endl;

    for (count = 0; count < m_index; count++)
    {
        m_list[count].displayListContact(count + 1);
        std::cout << "_____________________________________________" << std::endl;
    }
}

void PhoneBook::displayContact(unsigned int const& index) const
{
    m_list[index].displayContact();
}
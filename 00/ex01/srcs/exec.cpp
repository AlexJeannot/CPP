#include "../includes/exec.hpp"

std::string getCommand(void)
{
    std::string input;

    std::cout << "Please enter your command :" << std::endl << "> ";
    std::getline(std::cin, input);
    toUpperCase(input);
    if (input == "ADD" || input == "SEARCH" || input == "EXIT")
        return (input);
    else
    {
        std::cout << "\033[38;5;160m" << "Not a valid command !\n" << "\033[0m" << std::endl;
        return (getCommand());
    }
}

int askIndex(PhoneBook const& book)
{
    char input;

    std::cout << std::endl << "Please enter an index (1 - " << book.getIndex() << ")";
    std::cout << " to see more informations (or enter 0 for principal menu) :" << std::endl << "> ";
    input = std::cin.get();
    if (input == '\n')
        std::cout << "\033[38;5;208m" << "Please enter an index !" << std::endl;
    else if (std::cin.get() != '\n')
    {
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "\033[38;5;160m" << "Not a valid index !" << std::endl;
    }
    else if (input < 48 || input > book.getIndex() + 48)
        std::cout << "\033[38;5;160m" << "Not a valid index !" << std::endl;
    else
        return (input - 48);
    std::cout << "\033[0m";
    return (askIndex(book));
}

void execSearch(PhoneBook const& book)
{
    unsigned int index;

    if (book.getIndex() == 0)
        std::cout <<  "\033[38;5;160m" << "There is no contact in your phone book\n" << "\033[0m" << std::endl;
    else
    {
        display("smenu");
        book.displayListContact();
        index = askIndex(book);
        if (index != 0)
            book.displayContact(index - 1);
        display("pmenu");
    }
}

void execCommand(std::string const& cmd, PhoneBook& book)
{
    if (cmd == "ADD")
    {
        if (book.getIndex() == 8)
            std::cout << std::endl << "\033[38;5;160m" << "The phone book is full !" << "\033[0m" << std::endl;
        else
        {
            display("addmenu");
            book.addContact();  
        }
    }
    else
        execSearch(book);
}
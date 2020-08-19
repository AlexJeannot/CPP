#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include "../includes/exec.hpp"

int main()
{
    PhoneBook book;
    std::string cmd;

    display("launch");
    while (1)
    {
        cmd = getCommand();
        if (cmd != "EXIT")
            execCommand(cmd, book);
        else
            break;
    }
    display("exit");
    return (0);
}
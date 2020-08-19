#include "../includes/exec.hpp"

void display(std::string option)
{
    std::cout << "\033[38;5;135m";
    std::cout << std::endl;
    if (option == "launch")
    {
        std::cout << "\033[38;5;39m";
        std::cout << "###############################################################" << std::endl;
        std::cout << "#                      WELCOME TO PHONEBOOK                   #" << std::endl;
        std::cout << "###############################################################\n" << std::endl;
        std::cout << "\033[0m";
        std::cout << "Here are the commands : ADD / SEARCH / EXIT" << std::endl; 
    }
    else if (option == "exit")
    {
        std::cout << "\033[38;5;39m";
        std::cout << "###############################################################" << std::endl;
        std::cout << "#                            GOODBYE                          #" << std::endl;
        std::cout << "###############################################################\n" << std::endl;
    }
    else if (option == "pmenu")
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>> PRINCIPAL MENU <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    else if (option == "addmenu")
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>> ADD MENU <<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    else if (option == "smenu")
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>> SEARCH MENU <<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    std::cout << "\033[0m";
    std::cout << std::endl;
}

void toUpperCase(std::string& str)
{
    int count;

    for (count = 0; str[count]; count++)
    {
        if (str[count] >= 97 && str[count] <= 122)
            str[count] = str[count] - 32;
    }
}
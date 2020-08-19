#ifndef EXEC_H
#define EXEC_H

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

/* ANNEXES.CPP */
void        display(std::string option);
void        toUpperCase(std::string& str);

/* EXEC_CPP */
std::string getCommand(void);
int         askIndex(PhoneBook const& book);
void        execSearch(PhoneBook const& book);
void        execCommand(std::string const& cmd, PhoneBook& book);

#endif

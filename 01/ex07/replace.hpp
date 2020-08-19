#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

int     verifyArgs(int argc, char **argv);
void    convertCharArrayToString(std::string& output, char* const& input);
void    replaceContent(std::string& str, std::string const& toSearch, std::string const& toReplace);


#endif
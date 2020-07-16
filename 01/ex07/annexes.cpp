#include "replace.hpp"

int verifyArgs(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    if (!(argv[2][0]) || !(argv[3][0]))
    {
        std::cout << "Empty argument(s)" << std::endl;
        return (1);
    }
    return (0);

}

void convertCharArrayToString(std::string& output, char* const& input)
{
    unsigned int size;
    unsigned int count;

    for (size = 0; input[size]; size++);
    for (count = 0; count < size; count++)
        output += input[count];
}

void replaceContent(std::string& str, std::string const& toSearch, std::string const& toReplace)
{
    size_t toReplacePos(0);

    while ((toReplacePos = str.find(toSearch, toReplacePos)) != std::string::npos)
    {
        str.replace(toReplacePos, toSearch.size(), toReplace);
        toReplacePos += toReplace.length();
    }
}
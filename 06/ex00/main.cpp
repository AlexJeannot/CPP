#include "Convert.hpp"

int main(int argc, char **argv)
{
    Convert conv;

    if (argc != 2)
        std::cout << "Wrong number of arguments" << std::endl;
    else
        conv.display(std::string(argv[1]));
    return (0);
}
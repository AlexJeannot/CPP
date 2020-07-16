#include "replace.hpp"

int getInputFile(std::ifstream& file, char* const& fileName)
{
    file.open(fileName);
    if (!(file))
    {
        std::cout << "Wrong file name" << std::endl;
        return (1);
    }
    return (0);
}

int getOutputFile(std::ofstream& file, char* const& fileName)
{
    file.open(fileName);
    if (!(file))
    {
        std::cout << "Wrong file name" << std::endl;
        return (1);
    }
    return (0);
}

void getContent(std::ifstream& file, std::string& content)
{
    std::string line;

    while (getline(file, line))
    {
        content += line;
        content += '\n';
    }
    file.close();
}

int main(int argc, char **argv)
{
    std::ifstream Inputfile;
    std::ofstream Outputfile;
    std::string toSearch;
    std::string toReplace;
    std::string content;

    if (verifyArgs(argc, argv) == 1 || getInputFile(Inputfile, argv[1]) == 1)
        return (1);
    convertCharArrayToString(toSearch, argv[2]);
    convertCharArrayToString(toReplace, argv[3]);
    getContent(Inputfile, content);
    replaceContent(content, toSearch, toReplace);
    getOutputFile(Outputfile, argv[1]);
    Outputfile << content;
}
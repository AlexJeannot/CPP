#include <iostream>
#include <string>

unsigned int    ft_strlen(char* str)
{
    unsigned int count;

    for (count = 0; str[count]; count++);
    return (count);
}

char*           ft_uppercase(char* str)
{
    unsigned int count;
    unsigned int str_len;

    str_len = ft_strlen(str);
    for (count = 0; count < str_len; count++)
    {
        if (str[count] >= 97 && str[count] <= 122)
            str[count] = str[count] - 32;
    }
    return (str);
}

int               main(int argc, char** argv)
{
    unsigned int count;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (count = 1; count < argc; count++)
            std::cout << ft_uppercase(argv[count]);
        std::cout << std::endl;
    }
    return (0);
}
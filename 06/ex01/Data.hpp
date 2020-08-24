#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct Data
{
    std::string str1;
    std::string str2;
    int n;
};

void * serialize(void);
Data * deserialize(void * raw);

#endif
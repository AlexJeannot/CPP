#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string m_name;
        std::string m_type;

    public:
        // Constructor;
        Zombie(std::string p_name = "Default name", std::string p_type = "Default type");

        // Set
        void setName(std::string p_name);
        void setType(std::string p_type);
        
        // Display
        void announce(void) const;
};

#endif
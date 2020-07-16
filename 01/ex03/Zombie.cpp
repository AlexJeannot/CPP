#include "Zombie.hpp"

Zombie::Zombie(std::string p_name, std::string p_type)
{
    m_name = p_name;
    m_type = p_type;
}

void Zombie::setName(std::string p_name)
{
    m_name = p_name;
}

void Zombie::setType(std::string p_type)
{
    m_type = p_type;
}

void Zombie::announce(void) const
{
    std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}
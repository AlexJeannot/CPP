#include "Zombie.hpp"

Zombie::Zombie(std::string p_name, std::string p_type)
{
    m_name = p_name;
    m_type = p_type;
    this->announce();
}

void Zombie::announce(void) const
{
    std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}
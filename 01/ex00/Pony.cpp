#include "Pony.hpp"

unsigned int Pony::m_numberOfInstance = 0;

Pony::Pony(std::string p_name, std::string p_color, double p_height, double p_weight)
{
    m_name = p_name;
    m_color = p_color;
    m_height = p_height;
    m_weight = p_weight;
    m_numberOfInstance++;
}

Pony::~Pony(void)
{
    m_numberOfInstance--;
}

void Pony::displayPony(void) const
{
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Color: " << m_color << std::endl;
    std::cout << "Height: " << m_height << std::endl;
    std::cout << "Weight: " << m_weight << std::endl;
    std::cout << "Number of pony instance: " << m_numberOfInstance << std::endl;
}

void Pony::checkInstanceNumber(void)
{
    std::cout << std::endl << ">>>   Number of pony instance = "<<Pony::m_numberOfInstance << std::endl;
}
#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
    m_weight = 500;
}

std::string Brain::identify() const
{
    std::stringstream brainAddress;

    brainAddress << this;
    return(brainAddress.str());
}
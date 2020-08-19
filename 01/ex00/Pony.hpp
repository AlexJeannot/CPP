#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
    private:
        std::string m_name;
        std::string m_color;
        double      m_height;
        double      m_weight;
        // Static number of instance
        static unsigned int m_numberOfInstance;
    
    public:
        // Constructor
        Pony(std::string p_name = "My pony", std::string p_color = "White",
            double p_height = 1.0, double p_weight = 70.0);

        // Destructor
        ~Pony(void);

        // Display
        void displayPony(void) const;
        static void checkInstanceNumber(void);
};

#endif
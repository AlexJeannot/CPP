#include "Convert.hpp"

/* Constructors and destructor */

Convert::Convert()
{

}

Convert::Convert(const Convert & other)
{
    (void)other;
}


Convert::~Convert()
{
    
}


/* Operator overloads */

Convert & Convert::operator=(const Convert & other)
{
    (void)other;
    return (*this);
}


/* Other member functions */

double Convert::interpret(std::string input) const
{
    if (input.size() == 3 && input[0] == '\'' && input[2] == '\'')
        return (static_cast<double>(input[1]));
    else
        return (std::stod(input));
}


std::string Convert::toChar(const double & input)
{
    std::stringstream ss;
    std::string output;

    if (input < 32 || input > 126)
        output = "not displayable";
    else if (input == std::numeric_limits<double>::infinity()
            || input == -(std::numeric_limits<double>::infinity())
            || std::isnan(input))
        output = "impossible";
    else
    {
        ss << static_cast<char>(input);
        ss >> output;
    }
    return (output);
}


std::string Convert::toInt(const double & input)
{
    std::stringstream ss;
    std::string output;

    if (input > std::numeric_limits<int>::max()
        || input < std::numeric_limits<int>::min()
        || input == std::numeric_limits<double>::infinity()
        || input == -(std::numeric_limits<double>::infinity())
        || std::isnan(input))
        output = "impossible";
    else
    {
        ss << static_cast<int>(input);
        ss >> output; 
    }
    return (output);
}


std::string Convert::toFloat(const double & input)
{
    std::stringstream ss;
    std::string output;

    ss.precision(7);
    ss << static_cast<float>(input);
    if ((static_cast<float>(input) - static_cast<long>(input)) == 0)
        ss << ".0";
    ss << "f";

    ss >> output;
    return (output);
}


std::string Convert::toDouble(const double & input)
{
    std::stringstream ss;
    std::string output;
    
    ss.precision(16);
    ss << static_cast<double>(input);
    if ((static_cast<double>(input) - static_cast<long>(input)) == 0)
        ss << ".0";

    ss >> output;
    return (output);
}


void Convert::display(std::string input) const
{
    double converted(0);
    std::string type[4] = {"char", "int", "float", "double"};
    std::string (*func[])(const double &) =  {
        &Convert::toChar, &Convert::toInt,
        &Convert::toFloat, &Convert::toDouble               };

    try
    {
        converted = interpret(input);
    }
    catch (std::exception & e)
    {
        std::cerr << "Cannot interpred: " << input << ": " << e.what() << std::endl;
        return ;
    }
    for (int count = 0; count < 4; count++)
    {
        try
        {
            std::cout << type[count] << ": ";
            std::cout << func[count](converted);
        }
        catch(const std::exception& e)
        {
            std::cerr <<  "Cannot convert for " << type[count] << ": " << e.what();
        }
        std::cout << std::endl;
    }
}


#include <iostream>

int main()
{
    
    std::string str = "HI THIS IS BRAIN"; // Initialize a string variable to "HI THIS IS BRAIN"
    std::string *stringPTR = &str; // stringPTR: A pointer to the string
    std::string &stringREF = str; // stringREF: A reference to the string

    std::cout << &str << std::endl; // Memory address of the stringvariable
    std::cout << stringPTR << std::endl; // Memory address held by stingPTR
    std::cout << &stringREF << std::endl << std::endl; // Memory address held by stingREF

    std::cout << str << std::endl; // The value of the string variable
    std::cout << *stringPTR << std::endl; // The value pointed to by stringPTR
    std::cout << stringREF << std::endl; // The value pointed to by stringREF
    return (0);
}
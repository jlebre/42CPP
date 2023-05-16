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

/*
A string is initialized to "HI THIS IS BRAIN"
A pointer to the string is created and assigned the address of the string

Lets say the address of the string is 0x12345678
The pointer will hold the value 0x12345678

A reference to the string is created and assigned the string
Lets say the address of the reference is 0x87654321
The reference will hold the value 0x12345678

The address of the string is printed
0x12345678
The address held by the pointer is printed
0x12345678
The address held by the reference is printed
0x12345678

The string is printed
HI THIS IS BRAIN
The value pointed to by the pointer is printed
HI THIS IS BRAIN
The value pointed to by the reference is printed
HI THIS IS BRAIN

The address of the string is the same as the address held by the pointer
The address of the string is the same as the address held by the reference
The value of the string is the same as the value pointed to by the pointer
The value of the string is the same as the value pointed to by the reference
*/
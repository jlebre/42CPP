#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::debug()
{
    std::cout << "\033[0;31m[ DEBUG ]\033[0m\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!\n";
}

void    Harl::info()
{
    std::cout << "\033[0;31m[ INFO ]\033[0m\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    Harl::warning()
{
    std::cout << "\033[0;31m[ WARNING ]\033[0m\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error()
{
    std::cout << "\033[0;31m[ ERROR ]\033[0m\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

// Cant do it with if else
void    Harl::complain(std::string level)
{
    if (level == "DEBUG")
        this->debug();
    else if (level == "INFO")
        this->info();
    else if (level == "WARNING")
        this->warning();
    else if (level == "ERROR")
        this->error();
    else
        std::cout << "\033[0;31m[   ]\033[0m\nComplaining about something...\n";
}
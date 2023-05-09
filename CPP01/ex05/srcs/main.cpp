#include "Harl.hpp"

int main()
{
    Harl ComplainBot;

    //std::cout << "Testing [ DEBUG ]:\n";
    ComplainBot.complain("DEBUG");
    std::cout << std::endl;
    //std::cout << "Testing [ INFO ]:\n";
    ComplainBot.complain("INFO");
    std::cout << std::endl;
    //std::cout << "Testing [ WARNING ]:\n";
    ComplainBot.complain("WARNING");
    std::cout << std::endl;
    //std::cout << "Testing [ ERROR ]:\n";
    ComplainBot.complain("ERROR");
    std::cout << std::endl;
    //std::cout << "Testing [  ]:\n";
    ComplainBot.complain("test");
    return 0;
}
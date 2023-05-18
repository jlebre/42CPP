#include "Harl.hpp"

int main()
{
    Harl ComplainBot;

    //std::cout << "Testing [ DEBUG ]:\n";
    ComplainBot.complain("debug");
    std::cout << std::endl;
    //std::cout << "Testing [ INFO ]:\n";
    ComplainBot.complain("info");
    std::cout << std::endl;
    //std::cout << "Testing [ WARNING ]:\n";
    ComplainBot.complain("warning");
    std::cout << std::endl;
    //std::cout << "Testing [ ERROR ]:\n";
    ComplainBot.complain("error");
    std::cout << std::endl;
    //std::cout << "Testing [  ]:\n";
    ComplainBot.complain("test");
    return 0;
}
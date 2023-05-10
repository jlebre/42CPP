#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Wrong number of arguments\n";
        exit(-1);
    }
    Harl ComplainBot;
    
    std::string level = argv[1];
    ComplainBot.complain(level);
    return 0;
}
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon::Weapon())
{
    HumanA.name = name;
    HumanA.weapon = &Weapon;
}

HumanA::~HumanA(){}

void    HumanA::atack()
{
    std::cout << HumanA.name;
    std::cout << " attacks wit their ";
    std::cout << HumanA.weapon << "\n";
}
#include "HumanA.hpp"

HumanA::HumanA(std::string nome, Weapon &arma)
{
    name = nome;
    weapon = &arma;
}

HumanA::~HumanA(){}

void    HumanA::attack()
{
    std::cout << name;
    std::cout << " attacks wit their ";
    std::cout << weapon->getType() << "\n";
}
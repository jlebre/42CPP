#include "HumanB.hpp"

HumanB::HumanB(std::string nome)
{
    name = nome;
}

HumanB::~HumanB(){}

void    HumanB::setWeapon(Weapon &arma)
{
    weapon = &arma;
}

void    HumanB::attack()
{
    std::cout << name;
    std::cout << " attacks wit their ";
    std::cout << weapon->getType() << "\n";
}
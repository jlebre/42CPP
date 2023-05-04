#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

Weapon::getType()
{
    return (*Weapon.type);
}

void    Weapon::setType(std::string arma)
{
    Weapon.type = *arma;
}
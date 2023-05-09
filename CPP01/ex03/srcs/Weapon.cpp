#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    Weapon::setType(type);
}

Weapon::~Weapon(){}

const std::string    &Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string arma)
{
    this->type = arma;
}

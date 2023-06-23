#include "Cure.hpp"

Cure::Cure()
{
    _type = "cure";
}

Cure::~Cure(){}

void    Cure::clone()
{

}

void    Cure::use( ICharacter &target )
{
    std::cout << "A" << " heals " << target->_name << "'s wounds " << "B\n";
}
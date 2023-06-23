#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
}

Ice::~Ice(){}

void    Ice::clone()
{

}

void    Ice::use( ICharacter &target )
{
    std::cout << "A" << " shoots an ice bolt at " << target->_name << "B\n";
}
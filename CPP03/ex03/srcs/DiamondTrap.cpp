#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string name )
{
	_name = name;
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "Diamond Constructor Called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Destructor Called\n";
}

void    DiamondTrap::whoAmI()
{
	std::cout << "Hello\n";
}
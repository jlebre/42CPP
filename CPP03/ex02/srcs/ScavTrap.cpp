#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Scav Default Constructor Called\n";
}

ScavTrap::ScavTrap( const std::string name )
{
	_name = name;
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "Scav Constructor Called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Destructor Called\n";
}

void    ScavTrap::attack( const std::string &target )
{
	if (_hit <= 0)
	{
		std::cout << _name << " is dead.\n";
		return ;
	}
	if (_energy <= 0)
	{
		std::cout << "Energy too low...\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " \
		<< target << ", causing " << _attack \
		<< " point of damage!\n";
	this->_energy--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
}
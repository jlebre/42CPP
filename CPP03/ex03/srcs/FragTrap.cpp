#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string name )
{
	_name = name;
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "Frag Constructor Called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Destructor Called\n";
}

/*
void    FragTrap::attack( const std::string &target )
{
	if (_hit <= 0)
	{
		std::cout << _name << " is dead. (Frag)\n";
		return ;
	}
	if (_energy <= 0)
	{
		std::cout << "Energy too low... (Frag)\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " \
		<< target << ", causing " << _attack \
		<< " point of damage! (Frag)\n";
	this->_energy--;
}
*/

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " High Fives\n";
}
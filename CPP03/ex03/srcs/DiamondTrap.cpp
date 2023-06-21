#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond Default Constructor called!\n";
}

DiamondTrap::DiamondTrap( const std::string name ): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	FragTrap::_hit = 100;
	FragTrap::_attack = 30;
	ScavTrap::_energy = 50;
	std::cout << "Diamond Constructor called!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Destructor called!\n";
}

void	DiamondTrap::attack( const std::string &target)
{
	ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is " << _name << std::endl;
    std::cout << "My clap_name is " << ClapTrap::_name << std::endl;
}
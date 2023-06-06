#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called!\n";
}

ClapTrap::ClapTrap( const std::string name )
{
	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "Constructor called!\n";
}

ClapTrap::ClapTrap( const ClapTrap &copy )
{
	*this = copy;
	std::cout << "Copy constructor called!\n";
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &obj )
{
	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_energy = obj._energy;
	this->_attack = obj._attack;
	std::cout << "Copy assignment operator called!\n";

	return *this;
}

ClapTrap::~ClapTrap() { std::cout << "Destructor called!\n"; }

void    ClapTrap::attack( const std::string &target )
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
	std::cout << "ClapTrap " << _name << " attacks " \
		<< target << ", causing " << _attack \
		<< " point of damage!\n";
	this->_energy--;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
		std::cout << "ClapTrap " << _name << " takes " \
			<< amount << " points of damage!\n";
		_hit -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
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
	std::cout << "ClapTrap " << _name << " repairs " \
		<< amount << " points!\n";
	_hit += amount;
	_energy--;
}

std::string ClapTrap::getName()
{
	return _name;
}

int			ClapTrap::getDamage()
{
	return _attack;
}

int			 ClapTrap::getHealth()
{
	return _hit;
}

int			 ClapTrap::getEnergy()
{
	return _energy;
}

void ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setDamage(int damage)
{
	_attack = damage;
}

void ClapTrap::setHealth(int hit)
{
	_hit = hit;
}

void ClapTrap::setEnergy(int energy)
{
	_energy = energy;
}

void	ClapTrap::display_info()
{
	std::cout << " __________ \n";
	std::cout << "|Name:     |" << _name << std::endl;
	std::cout << "|__________|\n";
	std::cout << "|Hit:      |" << _hit << std::endl;
	std::cout << "|__________|\n";
	std::cout << "|Energy:   |" << _energy << std::endl;
	std::cout << "|__________|\n";
	std::cout << "|Damage:   |" << _attack << std::endl;
	std::cout << "|__________|\n";
}

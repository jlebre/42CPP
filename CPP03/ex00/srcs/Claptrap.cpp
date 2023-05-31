#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    setName(name);
    _hit = 10;
    _energy = 10;
    _attack = 0;
}

ClapTrap::ClapTrap( const ClapTrap &copy ){ ( void )copy; }

void	ClapTrap::operator=(const ClapTrap &copy){ ( void )copy; }

ClapTrap::~ClapTrap(){}

void    ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void    ClapTrap::attack( const std::string &target )
{
    if (this->_energy > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " \
            << target << ", causing " << takeDamage() \
            << " point of damage!\n";
        this->_energy--;
    }
}

void	ClapTrap::takeDamage( unsigned int amount )
{
    if (this->_energy > 0)
    {
        std::cout << "ClapTrap " << this->_name << " takes " \
            << amount << " points of damage!\n";
        _hit -= amount;
        this->_energy--;
    }
}

void	ClapTrap::beRepaired( unsigned int amount )
{
    if (this->_energy > 0)
    {
        std::cout << "ClapTrap " << this->_name << " repairs " \
            << amount << " points!\n";
        _hit += amount;
        this->_energy--;
    }
}

/*
void	ClapTrap::display_info( ClapTrap	A)
{
	std::cout << " __________ __________ __________ __________ ";
	std::cout << "|Name:     |Hit:      |Energy:   |Damage:   |";
	std::cout << "|__________|__________|__________|__________|";
	std::cout << "|" << A::getName() << "|" << A::getHealth();
	std::cout << "|" << A::getEnergy() << "|" << A::getDamage() << "|";
	std::cout << "|__________|__________|__________|__________|";
}
*/

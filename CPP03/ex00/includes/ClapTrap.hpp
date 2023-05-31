#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int			_hit;
		int			_energy;
		int			_attack;

	public:
		ClapTrap( std::string name );   
		ClapTrap(const ClapTrap& copy);  
		~ClapTrap();
		ClapTrap &operator = ( const ClapTrap &obj);
		void	setName(std::string name);
		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif

/*
void	display_info( ClapTrap	A);
std::string getName();
std::string getHealth();
std::string getEnergy();
std::string getDamage();
*/
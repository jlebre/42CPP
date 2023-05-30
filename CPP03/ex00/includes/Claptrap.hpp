#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class Claptrap
{
	private:
		std::string _name;
		int			_hit;
		int			_energy;
		int			_attack;

	public:
		Claptrap(void);   
		Claptrap(const Claptrap& copy);  
		~Claptrap();
		Claptrap& operator = ( const Claptrap&);
		void	setName(std::string name);
		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif


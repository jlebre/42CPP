#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int			_hit;
		int			_energy;
		int			_attack;

	public:
		ClapTrap();
		ClapTrap( std::string name );   
		ClapTrap(const ClapTrap& copy);  
		~ClapTrap();
		ClapTrap &operator = ( const ClapTrap &obj);
		void			attack( const std::string &target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		int				getDamage();
		int				getHealth();
		int				getEnergy();
		std::string 	getName();
		void			setDamage(int damage);
		void			setHealth(int health);
		void			setEnergy(int energy);
		void			setName(std::string name);
		void			display_info();
};

//std::ostream &operator<<(std::ostream &stream, const Fixed &obj);

#endif

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap( const std::string name );
		~ScavTrap();
		void    attack( const std::string &target );
		void	guardGate();
};

#endif

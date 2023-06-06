#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap
{
	private:

	public:
		DiamondTrap( const std::string name );
		~DiamondTrap();
		void	whoAmI();
};

#endif

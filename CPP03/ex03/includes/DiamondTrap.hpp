#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap();
        DiamondTrap( const std::string name );
        ~DiamondTrap();
		void    attack( const std::string &target );
        void    whoAmI();
};

#endif
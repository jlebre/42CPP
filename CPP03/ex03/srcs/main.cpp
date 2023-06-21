#include "DiamondTrap.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

void	red(std::string str)
{
	std::cout << "\n\033[0;31m" << str << "\033[0m\n";
}

int main( void )
{
	green("Creating Frank: (Diamond)");
	DiamondTrap Frank("Frank");

	green("Default values:");
	Frank.display_info();

	green("Frank attacks:");
	Frank.attack("Creator");

	green("Frank loses one bolt:");
	Frank.takeDamage(5);
	Frank.display_info();

	green("Frank heals himself with a bandage:");
	Frank.beRepaired(2);
	Frank.display_info();

	green("He enters Gate Keeper Mode:");
	Frank.guardGate();

	green("Then requests an High Five:");
	Frank.highFivesGuys();

	green("Now, Frank questions everything:");
	Frank.whoAmI();

	green("Kill Frank");
	return 0;
}


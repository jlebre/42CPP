#include "ClapTrap.hpp"

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
	std::cout << "\tOnly Tico\n";
	{
		green("Creating Tico:");
		ClapTrap Tico("Tico");

		green("Default values:");
		Tico.display_info();

		green("Tico will now attack someone:");
		Tico.attack("Someone");
		Tico.display_info();

		Tico.setDamage(5);
		green("Tico found a sword, now it takes 5 of Damage:");
		Tico.display_info();

		green("Attacks someone again:");
		Tico.attack("Someone");

		green("Kill Tico");
	}
	std::cout << "\n\n\tNow... The battle of Titans: TICO & TECO\n";
	{
		green("Creating Tico:");
		ClapTrap Tico("Tico");
		green("Creating Teco:");
		ClapTrap Teco("Teco");

		green("Default values:");
		Tico.display_info();
		Teco.display_info();

		green("Tico will attack first:");
		Tico.attack(Teco.getName());
		Teco.takeDamage(Tico.getDamage());
		Tico.display_info();
		Teco.display_info();

		green("Teco found a sword, that takes 5 of Damage:");
		Teco.setDamage(5);
		Tico.display_info();
		Teco.display_info();

		green("Teco attacks Tico with his sword:");
		Teco.attack(Tico.getName());
		Tico.takeDamage(Teco.getDamage());
		Tico.display_info();
		Teco.display_info();

		green("Tico heals himself with a bandage:");
		Tico.beRepaired(1);
		Tico.display_info();
		Teco.display_info();

		green("Tico pushes Teco:");
		Tico.attack(Teco.getName());
		Teco.takeDamage(Tico.getDamage());

		green("Teco trips and bangs his head on a rock, taking 8 of Damage:");
		Teco.takeDamage(8);
		Tico.display_info();
		Teco.display_info();

		green("Then Teco attacks again:");
		Teco.attack(Tico.getName());
		Tico.takeDamage(Teco.getDamage());
		Tico.display_info();
		Teco.display_info();

		green("Tico found a slingshot, that takes 2 of Damage:");
		Tico.setDamage(2);

		green("Tico attacks Teco:");
		Tico.attack(Teco.getName());
		Teco.takeDamage(Tico.getDamage());
		Tico.display_info();
		Teco.display_info();

		green("Teco tries to attack:");
		Teco.attack(Tico.getName());
		Tico.display_info();
		Teco.display_info();

		green("Tico applies 6 Bandages:");
		for (int i = 0 ; i < 6 ; i++)
			Tico.beRepaired(1);
		Tico.display_info();
		Teco.display_info();

		green("After that, Tico tries to do one last attack on Teco's dead body:");
		Tico.attack(Teco.getName());
		Tico.display_info();
		Teco.display_info();

		green("Kill Tico & Teco");
	}

	return 0;
}


#include "ScavTrap.hpp"

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
	std::cout << "\tOlaf Joins the party (Frag)\n";
	green("Creating Elsa: (Clap)");
	ClapTrap Elsa("Elsa");
	green("Creating IceGiant: (Scav)");
	ScavTrap IceGiant("IceGiant");
	green("Creating Olaf: (Frag)");
	FragTrap Olaf("Olaf");

	green("Default values:");
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("Elsa eats an apple, receives 60 of life:");
	Elsa.beRepaired(60);
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("IceGiant will attack first:");
	IceGiant.attack(Elsa.getName());
	Elsa.takeDamage(IceGiant.getDamage());
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("Elsa found a sword, that takes 5 of Damage:");
	Elsa.setDamage(5);
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("Elsa attacks IceGiant with his sword:");
	Elsa.attack(IceGiant.getName());
	IceGiant.takeDamage(Elsa.getDamage());
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("IceGiant heals himself with a bandage:");
	IceGiant.beRepaired(1);
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("IceGiant pushes Elsa:");
	IceGiant.attack(Elsa.getName());
	Elsa.takeDamage(IceGiant.getDamage());

	green("Elsa trips and bangs his head on a rock, taking 8 of Damage:");
	Elsa.takeDamage(8);
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("Then Elsa attacks again:");
	Elsa.attack(IceGiant.getName());
	IceGiant.takeDamage(Elsa.getDamage());
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("IceGiant found a slingshot, that takes 2 of Damage:");
	IceGiant.setDamage(2);

	green("IceGiant attacks Elsa:");
	IceGiant.attack(Elsa.getName());
	Elsa.takeDamage(IceGiant.getDamage());
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("Elsa tries to attack:");
	Elsa.attack(IceGiant.getName());
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("IceGiant applies 6 Bandages:");
	for (int i = 0 ; i < 6 ; i++)
		IceGiant.beRepaired(1);
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("After that, IceGiant tries to do one last attack on Elsa's dead body:");
	IceGiant.attack(Elsa.getName());
	IceGiant.display_info();
	Elsa.display_info();
	Olaf.display_info();

	green("After he fails, he enters Gate Keeper Mode:");
	IceGiant.guardGate();

	green("Olaf requests an High Five:");
	Olaf.highFivesGuys();

	green("Kill IceGiant & Elsa & Olaf");
	return 0;
}


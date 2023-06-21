#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main( void )
{
	int	nb = 6;
	const Animal *Pets[nb];

	for (int i = 0 ; i < nb ; i++)
	{
		if (i < nb / 2)
		{
			green("New Dog:");
			Pets[i] = new Dog();
		}
		else if (i >= nb / 2)
		{
			green("New Cat:");
			Pets[i] = new Cat();
		}
		std::cout << "Type: " << Pets[i]->getType() << std::endl;
		std::cout << "Sound: ";
		Pets[i]->makeSound();
		std::cout << std::endl;
	}

	green("Delete Pets:");
	for (int i = 0 ; i < nb ; i++)
	{
		std::cout << "Deleting " << Pets[i]->getType() << std::endl;
		delete Pets[i];
		std::cout << std::endl;
	}

 	green("\tTesting Deep Copy:");

 	green("Creating ScoobyDoo:");
	Dog ScoobyDoo;

 	green("Checking ScoobyDoo's brain:");
	ScoobyDoo.getBrain().showIdeas();

	green("ScoobyDoo had an idea:");
	ScoobyDoo.getBrain().newIdea("I'm gonna pee everywhere and conquer the world!");

 	green("Checking ScoobyDoo's brain:");
	ScoobyDoo.getBrain().showIdeas();

 	green("Creating Marmaduke (Copy of ScoobyDoo):");
	Dog Marmaduke = ScoobyDoo;
 	
	green("Checking Marmaduke's brain:");
	Marmaduke.getBrain().showIdeas();

	green("ScoobyDoo had another idea:");
	ScoobyDoo.getBrain().newIdea("I need to find me some bones!");

	green("Checking ScoobyDoo's brain:");
	ScoobyDoo.getBrain().showIdeas();
	green("Checking Marmaduke's brain:");
	Marmaduke.getBrain().showIdeas();

	green("Kill ScoobyDoo & Marmaduke");

	return 0;
}

/*
	If it was a shallow copy, if you set an idea for one animal
		, all of them would get it in their brain.
*/
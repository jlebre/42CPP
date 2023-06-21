#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	green(std::string str)
{
	std::cout << "\n\033[0;32m" << str << "\033[0m\n";
}

int main( void )
{
	std::cout << "Creatind Animals:\n";
	green("Creating Cat");
	const AAnimal* i = new Cat();
	green("Creating Dog");
	const AAnimal* j = new Dog();
	//green("Creating Generic Animal");
	//const AAnimal generic;

	green("");
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	
	green("");
	std::cout << j->getType() << " " << std::endl;	
	j->makeSound();

	green("Deleting Cat");
	delete i;
	green("Deleting Dog");
	delete j;

	return 0;
}

/*
	If it was a shallow copy, if you set an idea for one Aanimal
		, all of them would get it in their brain.
*/
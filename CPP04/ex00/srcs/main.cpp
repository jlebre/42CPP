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
	green("Creating Generic Animal");
	const Animal* meta = new Animal();
	green("Creating Cat");
	const Animal* i = new Cat();
	green("Creating Dog");
	const Animal* j = new Dog();

	green("Creating Generic WrongAnimal");
	const WrongAnimal* a = new WrongAnimal();
	green("Creating WrongCat");
	const WrongAnimal* b = new WrongCat();

	green("");
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	
	green("");
	std::cout << j->getType() << " " << std::endl;	
	j->makeSound();

	green("");
	std::cout << meta->getType() << " " << std::endl;	
	meta->makeSound();
	
	green("");
	std::cout << a->getType() << " " << std::endl;	
	a->makeSound();
	
	green("");
	std::cout << b->getType() << " " << std::endl;	
	b->makeSound();

	green("Deleting Generic Animal");
	delete meta;
	green("Deleting Cat");
	delete i;
	green("Deleting Dog");
	delete j;

	green("Deleting Generic WrongAnimal");
	delete a;
	green("Deleting Generic WrongCat");
	delete b;

	return 0;
}


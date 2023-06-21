#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor Called\n";
    type = "Cat";
	cerebrum = new Brain();
}

Cat::Cat( const Cat &copy ): AAnimal(copy)
{
	*this = copy;
	std::cout << "Cat Copy constructor Called!\n";
}

Cat	&Cat::operator=( const Cat &obj )
{
	type = obj.getType();
	std::cout << "Cat Copy assignment operator Called!\n";
	cerebrum = new Brain(obj.getBrain());

	return *this;
}

Cat::~Cat()
{
	delete cerebrum;
    std::cout << "Cat constructor Called\n";
}

void Cat::makeSound() const
{
    std::cout << "meow meow\n";
}

Brain &Cat::getBrain() const
{
	return *cerebrum;
}
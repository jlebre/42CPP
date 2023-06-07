#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor called\n";
}

Cat::Cat( const Cat &copy ): Animal(copy)
{
	*this = copy;
	std::cout << "Cat Copy constructor called!\n";
}

Cat	&Cat::operator=( const Cat &obj )
{
	type = obj.getType();
	std::cout << "Cat Copy assignment operator called!\n";

	return *this;
}

Cat::~Cat()
{
    std::cout << "Cat constructor called\n";
}

void Cat::makeSound() const
{
    std::cout << "meow meow\n";
}
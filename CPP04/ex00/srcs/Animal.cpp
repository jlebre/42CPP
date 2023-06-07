#include "Animal.hpp"

Animal::Animal(): type("Ahahah")
{
	std::cout << "Constructor Called\n";
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
	std::cout << "Copy constructor called\n!";
}

Animal	&Animal::operator=( const Animal &obj )
{
	type = obj.type;
	std::cout << "Copy assignment operator called!\n";

	return *this;
}

std::string Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	std::cout << "Destructor Called\n";
}

void	Animal::makeSound() const
{
	std::cout << "Some Animal Sound\n";
}

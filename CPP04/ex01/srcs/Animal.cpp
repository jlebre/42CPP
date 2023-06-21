#include "Animal.hpp"

Animal::Animal(): type("Generic Animal")
{
	std::cout << "Animal Constructor Called!\n";
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
	std::cout << "Animal Copy constructor called!\n";
}

Animal	&Animal::operator=( const Animal &obj )
{
	type = obj.type;
	std::cout << "Animal Copy assignment operator called!\n";

	return *this;
}

std::string Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called!\n";
}

void	Animal::makeSound() const
{
	std::cout << "Generic Animal Sound\n";
}

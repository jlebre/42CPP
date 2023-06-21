#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Generic WrongAnimal")
{
	std::cout << "WrongAnimal Constructor Called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	*this = copy;
	std::cout << "WrongAnimal Copy constructor Called!\n";
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &obj )
{
	type = obj.type;
	std::cout << "WrongAnimal Copy assignment operator Called!\n";

	return *this;
}

std::string WrongAnimal::getType() const
{
	return type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Generic WrongAnimal Sound\n";
}

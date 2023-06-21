#include "AAnimal.hpp"

AAnimal::AAnimal(): type("Generic AAnimal")
{
	std::cout << "AAnimal Constructor Called!\n";
}

AAnimal::AAnimal( const AAnimal &copy )
{
	*this = copy;
	std::cout << "AAnimal Copy constructor called!\n";
}

AAnimal	&AAnimal::operator=( const AAnimal &obj )
{
	type = obj.type;
	std::cout << "AAnimal Copy assignment operator called!\n";

	return *this;
}

std::string AAnimal::getType() const
{
	return type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor Called!\n";
}

void	AAnimal::makeSound() const
{
	std::cout << "Generic AAnimal Sound\n";
}

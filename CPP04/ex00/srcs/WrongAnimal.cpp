#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor Called";
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	*this = copy;
	std::cout << "Copy constructor called!";
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &obj )
{
	( void )obj;
	std::cout << "Copy assignment operator called!";

	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor Called";
}


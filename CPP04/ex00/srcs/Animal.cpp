#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor Called
";
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
	std::cout << "Copy constructor called!
";
}

Animal	&Animal::operator=( const Animal &obj )
{
	( void )obj;
	std::cout << "Copy assignment operator called!
";

}

Animal::~Animal()
{
	std::cout << "Destructor Called
";
}


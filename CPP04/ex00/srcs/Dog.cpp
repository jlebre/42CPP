#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called\n";
}

Dog::Dog( const Dog &copy ): Animal(copy)
{
	*this = copy;
	std::cout << "Dog Copy constructor called!\n";
}

Dog	&Dog::operator=( const Dog &obj )
{
	type = obj.getType();
	std::cout << "Dog Copy assignment operator called!\n";

	return *this;
}

Dog::~Dog()
{
    std::cout << "Dog constructor called\n";
}

void    Dog::makeSound() const
{
    std::cout << "oof oof\n";
}
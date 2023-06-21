#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor Called!\n";
    type = "Dog";
	cerebrum = new Brain();
}

Dog::Dog( const Dog &copy ): Animal(copy)
{
	*this = copy;
	std::cout << "Dog Copy constructor Called!\n";
}

Dog	&Dog::operator=( const Dog &obj )
{
	type = obj.getType();
	std::cout << "Dog Copy assignment operator Called!\n";
	cerebrum = new Brain(obj.getBrain());

	return *this;
}

Dog::~Dog()
{
	delete cerebrum;
    std::cout << "Dog constructor Called!\n";
}

void    Dog::makeSound() const
{
    std::cout << "oof oof\n";
}

Brain &Dog::getBrain() const
{
	return *cerebrum;
}
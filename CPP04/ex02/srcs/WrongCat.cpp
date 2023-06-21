#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat( const WrongCat &copy ): WrongAnimal(copy)
{
	*this = copy;
	std::cout << "WrongCat Copy constructor called!\n";
}

WrongCat	&WrongCat::operator=( const WrongCat &obj )
{
	type = obj.getType();
	std::cout << "WrongCat Copy assignment operator called!\n";

	return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat constructor called\n";
}

void WrongCat::makeSound() const
{
    std::cout << "oof ?\n";
}
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	WrongCat();
	~WrongCat();
	void makeSound();
};

#endif
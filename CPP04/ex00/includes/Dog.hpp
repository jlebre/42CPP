#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: virtual public Animal
{
	private:
	
	public:
		Dog();
		Dog( const Dog &copy );  
		Dog &operator = ( const Dog &obj );
		~Dog();
		virtual void makeSound() const;
};

#endif
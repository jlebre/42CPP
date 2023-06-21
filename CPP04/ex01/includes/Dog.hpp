#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal
{
	private:
		Brain	*cerebrum;
	
	public:
		Dog();
		Dog( const Dog &copy );  
		Dog &operator = ( const Dog &obj );
		~Dog();
		Brain	&getBrain() const;
		virtual void makeSound() const;
};

#endif
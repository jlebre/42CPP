#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: virtual public Animal
{
	private:

	public:
		Cat();
		Cat( const Cat &copy );  
		Cat &operator = ( const Cat &obj );
		~Cat();
		virtual void makeSound() const;
};

#endif
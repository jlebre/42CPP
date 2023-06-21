#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: virtual public AAnimal
{
	private:
		Brain *cerebrum;

	public:
		Cat();
		Cat( const Cat &copy );  
		Cat &operator = ( const Cat &obj );
		~Cat();
		Brain	&getBrain() const;
		virtual void makeSound() const;
};

#endif
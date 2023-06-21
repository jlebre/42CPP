#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat( const WrongCat &copy );  
		WrongCat &operator = ( const WrongCat &obj );
		~WrongCat();
		virtual void makeSound() const;
};

#endif
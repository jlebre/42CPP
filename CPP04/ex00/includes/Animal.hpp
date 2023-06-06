#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:

	public:
		Animal( void );   
		Animal( const Animal &copy );  
		~Animal();
		Animal &operator = ( const Animal &obj );
};

#endif


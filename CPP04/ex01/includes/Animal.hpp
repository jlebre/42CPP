#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal( void );   
		Animal( const Animal &copy );  
		Animal &operator = ( const Animal &obj );
		virtual ~Animal();
		std::string	getType() const;
		virtual void makeSound() const;
};

#endif

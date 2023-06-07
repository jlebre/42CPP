#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal( void );   
		WrongAnimal( const WrongAnimal &copy );  
		~WrongAnimal();
		WrongAnimal &operator = ( const WrongAnimal &obj );
		virtual makeSound();
};

#endif

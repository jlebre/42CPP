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
		WrongAnimal &operator = ( const WrongAnimal &obj );
		virtual ~WrongAnimal();
		std::string	getType() const;
		virtual void makeSound() const;
};

#endif

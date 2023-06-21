#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal( void );   
		AAnimal( const AAnimal &copy );  
		AAnimal &operator = ( const AAnimal &obj );
		virtual ~AAnimal();
		std::string	getType() const;
		virtual void makeSound() const = 0;
};

#endif

/*
By initiating a vritual function to 0 it becomes a pure virtual
Meaning it has to be overriden by subfuncitons
*/
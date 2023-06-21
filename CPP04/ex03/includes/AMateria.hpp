#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria
{
	protected:
		std::string	_type;
	   
	public:
		AMateria();
		AMateria( std::string const &type );
		~AMateria();
	
		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0; // Pure virtual
		virtual void use(ICharacter &target);
};

#endif
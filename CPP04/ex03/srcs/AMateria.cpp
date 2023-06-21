#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default Constructor Called!\n";
}

AMateria::AMateria( std::string const &type )
{
	_type = type;
}
	
std::string const &AMateria::getType() const
{
	return _type;
}

virtual void AMateria::use(ICharacter &target)
{
	std::cout << "Use!\n";
}

AMateria::~AMateria()
{
	std::cout << "Destructor Called!\n";
}
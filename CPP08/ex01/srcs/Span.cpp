#include "Serialization.hpp"

Serialization::Serialization()
{
	std::cout << "Constructor Called\n";
}

Serialization::Serialization( const Serialization &copy )
{
	(void)copy;
	std::cout << "Copy constructor called!\n";
}

Serialization	&Serialization::operator=( const Serialization &obj )
{
	(void)obj;
	std::cout << "Copy assignment operator called!\n";

	return *this;
}

Serialization::~Serialization()
{
	std::cout << "Destructor Called\n";
}

uintptr_t	Serialization::serialize( Data* ptr )
{
	return reinterpret_cast<uintptr_t>( ptr );
}

Data*    Serialization::deserialize( uintptr_t raw )
{
	return reinterpret_cast<Data *>( raw );
}
#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <stdint.h>

typedef struct Data
{
	int i;
    char c;
    double d;
} Data;


class Serialization
{
	private:

	public:
		Serialization( void ); 
		Serialization( const Serialization &copy );  
		~Serialization();
		Serialization &operator = ( const Serialization &obj );

		static uintptr_t	serialize( Data* ptr );
		static Data*    deserialize( uintptr_t raw );
};

#endif
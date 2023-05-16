#include <Fixed.hpp>

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    Fixed::_fractional_bits = 8;
    Fixed::_fixed_value = 0;
}

Fixed::Fixed()
{
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called\n";
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (Fixed::_fixed_value);
}

void    Fixed::setRawBits( int const raw )
{
    Fixed::_fixed_value = raw;
}

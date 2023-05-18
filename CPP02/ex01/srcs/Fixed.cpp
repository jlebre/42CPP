#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    Fixed::_fixed_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
    std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    this->_fixed_value = copy._fixed_value;
    std::cout << "Copy assignment operator called\n";
    return *this;
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

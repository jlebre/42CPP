#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->_fixed_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called\n";
    this->_fixed_value = copy.getRawBits();
}

Fixed::Fixed(int i)
{
    std::cout << "Int constructor called\n";
    this->_fixed_value = i << this->_fractional_bits;
}

Fixed::Fixed(float f)
{
    std::cout << "Float constructor called\n";
    this->_fixed_value = (roundf(f * (1 << this->_fractional_bits)));
}

Fixed&    Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called\n";
    _fixed_value = copy.getRawBits();
    return *this;
}

std::ostream&    operator<<(std::ostream &stream, const Fixed &obj)
{
    stream << obj.toFloat();
    return stream;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called\n";
}

int Fixed::getRawBits( void ) const
{
    return (this->_fixed_value);
}

void    Fixed::setRawBits( int const raw )
{
    this->_fixed_value = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_fixed_value / (float)(1 << this->_fractional_bits));
}

int Fixed::toInt( void ) const
{
    return (this->_fixed_value >> this->_fractional_bits);
}
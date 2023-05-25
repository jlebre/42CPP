#include "Fixed.hpp"

Fixed::Fixed()
{ 
    this->_fixed_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    this->_fixed_value = copy.getRawBits();
}

Fixed::Fixed(int i)
{
    this->_fixed_value = i << this->_fractional_bits;
}

Fixed::Fixed(float f)
{
    this->_fixed_value = (roundf(f * (1 << this->_fractional_bits)));
}

Fixed&    Fixed::operator=(const Fixed &copy)
{
    _fixed_value = copy.getRawBits();
    return *this;
}

std::ostream&    operator<<(std::ostream &stream, const Fixed &obj)
{
    stream << obj.toFloat();
    return stream;
}

bool Fixed::operator> (const Fixed &obj) const
{
    return this->_fixed_value > obj.getRawBits();
}

bool Fixed::operator< (const Fixed &obj) const
{
    return this->_fixed_value < obj.getRawBits();
}

bool Fixed::operator>= (const Fixed &obj) const
{
    return this->_fixed_value >= obj.getRawBits();
}

bool Fixed::operator<= (const Fixed &obj) const
{
    return this->_fixed_value <= obj.getRawBits();
}

bool Fixed::operator== (const Fixed &obj) const
{
    return this->_fixed_value == obj.getRawBits();
}

bool Fixed::operator!= (const Fixed &obj) const
{
    return this->_fixed_value != obj.getRawBits();
}

Fixed	Fixed::operator+ (const Fixed &obj) const
{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator- (const Fixed &obj) const
{
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator* (const Fixed &obj) const
{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/ (const Fixed &obj) const
{
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed	&Fixed::operator++ ()
{
    this->_fixed_value++;

    return *this;
}

Fixed	Fixed::operator++ (int)
{
    Fixed temp = *this;
    this->_fixed_value++;

    return temp;
}

Fixed	&Fixed::operator-- ()
{
    this->_fixed_value--;

    return *this;
}

Fixed	Fixed::operator-- (int)
{
    Fixed temp = *this;
    this->_fixed_value--;

    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return b;
    return a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return b;
    return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return b;
    return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return b;
    return a;
}

Fixed::~Fixed(){ }

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
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _fixed_value;
        static const int    _fractional_bits;

    public:
        Fixed();
        Fixed(Fixed &);
        ~Fixed();
        Fixed & operator = (const Fixed &fixed);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif
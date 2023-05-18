#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _fixed_value;
        static const int    _fractional_bits = 8;

    public:
        Fixed( void );    // Default constructor
        Fixed( const Fixed& copy );   // Copy Constructor
        // (..) Other Constructors
        Fixed( const int i ); 
        Fixed( const float f );   
        ~Fixed(); // Destructor
        Fixed &operator = ( const Fixed &copy ); // Assignment
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

#endif
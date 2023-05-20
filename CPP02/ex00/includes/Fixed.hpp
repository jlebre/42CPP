#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _fixed_value;
        static const int    _fractional_bits = 8;

    public:
        Fixed( void );    // Default constructor
        Fixed( const Fixed& copy );   // Copy Constructor
        // (..) Other Constructors
        ~Fixed(); // Destructor
        void    operator = ( const Fixed &copy ); // Assignment
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif
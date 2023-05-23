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
		Fixed(void);
		Fixed(const Fixed& copy);
		Fixed(int i);
		Fixed(float f);
		~Fixed();
		void	operator = ( const Fixed &copy);
		int 	getRawBits( void ) const;
		void    setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

#endif


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:

	public:
		Fixed(void);
		Fixed(const Fixed& copy);
		Fixed(int i);
		Fixed(float f);
		~Fixed();
		Fixed& operator = ( const Fixed&);
		int getRawBits( void ) const;
		void    setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

#endif


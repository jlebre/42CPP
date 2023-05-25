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
		Fixed& operator = ( const Fixed &copy);

		bool operator> (const Fixed &obj) const;
		bool operator< (const Fixed &obj) const;
		bool operator>= (const Fixed &obj) const;
		bool operator<= (const Fixed &obj) const;
		bool operator== (const Fixed &obj) const;
		bool operator!= (const Fixed &obj) const;

		Fixed	operator+ (const Fixed &obj) const;
		Fixed	operator- (const Fixed &obj) const;
		Fixed	operator* (const Fixed &obj) const;
		Fixed	operator/ (const Fixed &obj) const;

		Fixed	&operator++ ();
		Fixed	operator++ (int);
		Fixed	&operator-- ();
		Fixed	operator-- (int);

		int 	getRawBits( void ) const;
		void    setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &obj);

#endif


#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point( void );
		Point( float x1, float y1 );   
		Point( const Point &copy );  
		~Point();
		Point& operator = ( const Point &copy );
		const Fixed	&getX() const;
		const Fixed	&getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif


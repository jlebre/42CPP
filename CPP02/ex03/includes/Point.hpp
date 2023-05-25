#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point( void );
		Point( floar x1, float y1 );   
		Point( const Point &copy );  
		~Point();
		Point& operator = ( const Point &copy );
		float   sign( Point const p1, Point const p2, Point const p3 );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif


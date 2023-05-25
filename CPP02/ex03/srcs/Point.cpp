#include "Point.hpp"

Point::Point()
{
    Point::x = Fixed(0);
    Point::y = Fixed(0);
}

Point::Point( float x1, float y1)
{
    Point::x = Fixed(x1);
    Point::y = Fixed(y1);
}

Point::Point( const Point &copy )
{

}

void	Point::operator=( const Point &copy )
{

}

Point::~Point(){}

float   Fixed::sign( Point const p1, Point const p2, Point const p3 )
{
    return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point )
{
    float   d1, d2, d3;
    bool    has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
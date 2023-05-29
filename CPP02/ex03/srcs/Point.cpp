#include "Point.hpp"


/*
    O problema está no = operator
*/

Point::Point()
{
    this->_x = 0;
    this->_y = 0;
}

Point::Point( float x1, float y1)
{
    Fixed a(x1);
    Fixed b(y1);

    _x = a;
    _y = b;
}

Point::Point( const Point &copy )
{
    this->_x = copy.getX();
    this->_y = copy.getY();
}

void	Point::operator=( const Point &copy )
{
    this->_x = copy.getX();
    this->_y = copy.getY();
    return *this;
}

Point::~Point(){}

Fixed   &Point::getX()
{
    return _x;
}

Fixed   &Point::getY()
{
    return _y;
}

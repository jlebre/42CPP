#include "Point.hpp"

Point::Point(): _x(0), _y(0){}

Point::Point( const float x1, const float y1): _x(x1), _y(y1){}

Point::Point( const Point &copy ): _x(copy._x), _y(copy._y){}

Point	&Point::operator=( const Point &copy )
{
    const_cast<Fixed &>(_x) = copy.getX();
    const_cast<Fixed &>(_y) = copy.getY();

    return *this;
}

Point::~Point(){}

const Fixed   &Point::getX() const
{
    return _x;
}

const Fixed   &Point::getY() const
{
    return _y;
}

/*
    Como _x e _y sao definidos como const, nao da  para alterar o valor
        ainda que seja no Constructor.
    Para resolver isso, usa-se uma Initialization list

    : _x(0), _y(0){}
*/

//Change const value
//https://stackoverflow.com/questions/58309690/easiest-way-to-modify-a-const-variables-value
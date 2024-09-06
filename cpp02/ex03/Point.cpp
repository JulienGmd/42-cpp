#include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(const Point &point)
{
    *this = point; // Use the operator=
}

Point::~Point()
{
}

Point &Point::operator=(const Point &point)
{
    x = point.x;
    y = point.y;
    return *this;
}

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

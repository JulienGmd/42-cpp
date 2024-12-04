#pragma once

#include "Fixed.h"

class Point
{
public:
    Point();
    Point(const Point &point);
    ~Point();
    Point &operator=(const Point &point);
    Point(const float x, const float y);

private:
    Fixed const _x;
    Fixed const _y;

public:
    Fixed getX() const;
    Fixed getY() const;
};

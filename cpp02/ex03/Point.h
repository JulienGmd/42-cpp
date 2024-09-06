#pragma once

class Point
{
public:
    // Orthodox Canonical Form
    Point();
    Point(const Point &point);
    ~Point();
    Point &operator=(const Point &point);

    Point(int x, int y);

    int getX() const;
    int getY() const;

private:
    int x;
    int y;
};

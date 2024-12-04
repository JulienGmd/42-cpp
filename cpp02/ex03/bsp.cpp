#include "Point.h"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed x = point.getX();
    Fixed y = point.getY();
    Fixed x1 = a.getX();
    Fixed y1 = a.getY();
    Fixed x2 = b.getX();
    Fixed y2 = b.getY();
    Fixed x3 = c.getX();
    Fixed y3 = c.getY();

    Fixed divisor = (y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3);
    if (divisor == 0)
        return false;

    // Baricentric coordinates method
    // https://www.youtube.com/watch?v=HYAgJN3x4GA&ab_channel=SebastianLague
    Fixed barycentric1 = ((y2 - y3) * (x - x3) + (x3 - x2) * (y - y3)) / divisor;
    Fixed barycentric2 = ((y3 - y1) * (x - x3) + (x1 - x3) * (y - y3)) / divisor;

    return (barycentric1 > 0 && barycentric2 > 0 &&
            barycentric2 + barycentric1 < 1);
}

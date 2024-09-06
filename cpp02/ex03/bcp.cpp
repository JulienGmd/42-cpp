#include "Point.h"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float x = point.getX();
    float y = point.getY();
    float x1 = a.getX();
    float y1 = a.getY();
    float x2 = b.getX();
    float y2 = b.getY();
    float x3 = c.getX();
    float y3 = c.getY();

    // Baricentric coordinates method
    float barycentric1 = ((y2 - y3) * (x - x3) + (x3 - x2) * (y - y3)) /
                         ((y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3));
    float barycentric2 = ((y3 - y1) * (x - x3) + (x1 - x3) * (y - y3)) /
                         ((y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3));
    float barycentric3 = 1 - barycentric1 - barycentric2;
    
    return (barycentric1 > 0 && barycentric1 < 1 &&
            barycentric2 > 0 && barycentric2 < 1 &&
            barycentric3 > 0 && barycentric3 < 1);
}

#include <iostream>
#include "Point.h"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point a(0, 0);
    Point b(0, 4);
    Point c(4, 0);

    std::cout << bsp(a, b, c, Point(0, 0)) << std::endl;
    std::cout << bsp(a, b, c, Point(1, 1)) << std::endl;
    std::cout << bsp(a, b, c, Point(1, 2)) << std::endl;
    std::cout << bsp(a, b, c, Point(2, 2)) << std::endl;
    std::cout << bsp(a, b, c, Point(3, 3)) << std::endl;

    return 0;
}

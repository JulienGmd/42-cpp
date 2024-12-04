#include "Point.h"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 4);

    // Vertices
    std::cout << "Vertices" << std::endl;
    std::cout << bsp(a, b, c, a) << std::endl;
    std::cout << bsp(a, b, c, b) << std::endl;
    std::cout << bsp(a, b, c, c) << std::endl;
    std::cout << std::endl;

    // Edges
    std::cout << "Edges" << std::endl;
    std::cout << bsp(a, b, c, Point(2, 0)) << std::endl;
    std::cout << bsp(a, b, c, Point(0, 2)) << std::endl;
    std::cout << bsp(a, b, c, Point(2, 2)) << std::endl;
    std::cout << std::endl;

    // Outside
    std::cout << "Outside" << std::endl;
    std::cout << bsp(a, b, c, Point(-1, -1)) << std::endl;
    std::cout << bsp(a, b, c, Point(-1, 0)) << std::endl;
    std::cout << bsp(a, b, c, Point(0, -1)) << std::endl;
    std::cout << bsp(a, b, c, Point(5, 0)) << std::endl;
    std::cout << bsp(a, b, c, Point(0, 5)) << std::endl;
    std::cout << bsp(a, b, c, Point(3, 3)) << std::endl;
    std::cout << std::endl;

    // Inside
    std::cout << "Inside" << std::endl;
    std::cout << bsp(a, b, c, Point(1, 1)) << std::endl;
    std::cout << bsp(a, b, c, Point(1, 2)) << std::endl;
    std::cout << bsp(a, b, c, Point(2, 1)) << std::endl;
    std::cout << std::endl;

    return 0;
}

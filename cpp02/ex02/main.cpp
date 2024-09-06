#include <iostream>
#include "Fixed.h"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    // -----

    Fixed c(2.4f);
    Fixed d(1.2f);

    std::cout << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << "c > d: " << (c > d) << std::endl;
    std::cout << "c < d: " << (c < d) << std::endl;
    std::cout << "c >= d: " << (c >= d) << std::endl;
    std::cout << "c <= d: " << (c <= d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;

    std::cout << "c + d: " << (c + d) << std::endl;
    std::cout << "c - d: " << (c - d) << std::endl;
    std::cout << "c * d: " << (c * d) << std::endl;
    std::cout << "c / d: " << (c / d) << std::endl;

    std::cout << "      before |  ++/--  | after:" << std::endl;
    std::cout << "c++: " << c << " | " << c++ << " | " << c << std::endl;
    std::cout << "++c: " << c << " | " << ++c << " | " << c << std::endl;
    std::cout << "c--: " << c << " | " << c-- << " | " << c << std::endl;
    std::cout << "--c: " << c << " | " << --c << " | " << c << std::endl;

    std::cout << "min(c, d): " << Fixed::min(c, d) << std::endl;
    std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;

    return 0;
}

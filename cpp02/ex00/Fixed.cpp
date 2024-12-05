#include "Fixed.h"
#include <iostream>

Fixed::Fixed()
{
    print("Default constructor called");
    value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    print("Copy constructor called");
    *this = fixed;
}

Fixed::~Fixed()
{
    print("Destructor called");
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    print("Copy assignment operator called");
    if (this == &fixed)
        return *this;
    value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    print("getRawBits member function called");
    return value;
}

void Fixed::setRawBits(const int raw)
{
    print("setRawBits member function called");
    value = raw;
}

void Fixed::print(const std::string &msg) const
{
    std::cout << msg << std::endl;
}

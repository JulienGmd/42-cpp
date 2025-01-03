#include "Fixed.h"
#include <cmath>
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
    return value;
}

void Fixed::setRawBits(const int raw)
{
    value = raw;
}

void Fixed::print(const std::string &msg) const
{
    std::cout << msg << std::endl;
}

// ----- ex01 ------------------------------------------------------------------

Fixed::Fixed(const int value)
{
    print("Int constructor called");
    this->value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
    print("Float constructor called");
    this->value = (int)roundf(value * (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
    return value >> fractional_bits;
}

float Fixed::toFloat(void) const
{
    return (float)value / (1 << fractional_bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

// -----------------------------------------------------------------------------

#include <iostream>
#include "Fixed.h"

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

Fixed::Fixed(const int value)
{
    print("Int constructor called");
    this->value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
    print("Float constructor called");
    this->value = (int) (value * (1 << fractional_bits));
}

Fixed::~Fixed()
{
    print("Destructor called");
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    print("Copy assignment operator called");
    value = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    return value;
}

void Fixed::setRawBits(const int raw)
{
    value = raw;
}

float Fixed::toFloat(void) const
{
    return (float) value / (1 << fractional_bits);
}

int Fixed::toInt(void) const
{
    return value >> fractional_bits;
}

void Fixed::print(const std::string &msg) const
{
    std::cout << msg << std::endl;
}

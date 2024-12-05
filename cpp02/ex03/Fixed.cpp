#include "Fixed.h"
#include <cmath>
#include <iostream>

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this == &fixed)
        return *this;
    value = fixed.value;
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
    this->value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
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

// ----- ex02 ------------------------------------------------------------------

bool Fixed::operator>(const Fixed &fixed) const
{
    return value > fixed.value;
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return value < fixed.value;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return value >= fixed.value;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return value <= fixed.value;
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return value == fixed.value;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return value != fixed.value;
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed result;
    result.value = value + fixed.value;
    return result;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed result;
    result.value = value - fixed.value;
    return result;
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed result;
    result.value = (value * fixed.value) >> fractional_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed result;
    result.value = (value << fractional_bits) / fixed.value;
    return result;
}

Fixed &Fixed::operator++()
{
    value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}

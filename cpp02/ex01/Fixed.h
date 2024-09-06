#pragma once

#include <string>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();

    Fixed &operator=(const Fixed &fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

private:
    int value;
    static const int fractional_bits = 8;
    void print(const std::string &msg) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

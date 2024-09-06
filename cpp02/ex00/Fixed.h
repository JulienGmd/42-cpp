#pragma once

#include <string>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &fixed);
    ~Fixed();

    Fixed &operator=(const Fixed &fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    int value;
    static const int fractional_bits = 8;
    void print(const std::string &msg) const;
};

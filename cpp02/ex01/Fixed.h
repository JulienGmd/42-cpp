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

    // ----- ex01 --------------------------------------------------------------

    Fixed(const int value);
    Fixed(const float value);

    int toInt(void) const;
    float toFloat(void) const;

    // -------------------------------------------------------------------------

private:
    int value;
    static const int fractional_bits = 8;
    void print(const std::string &msg) const;
};

// ----- ex01 ------------------------------------------------------------------

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

// -----------------------------------------------------------------------------

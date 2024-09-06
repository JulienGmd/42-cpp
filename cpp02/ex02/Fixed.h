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

    // ----- ex02 --------------------------------------------------------------

    bool operator>(const Fixed &fixed) const;
    bool operator<(const Fixed &fixed) const;
    bool operator>=(const Fixed &fixed) const;
    bool operator<=(const Fixed &fixed) const;
    bool operator==(const Fixed &fixed) const;
    bool operator!=(const Fixed &fixed) const;

    Fixed operator+(const Fixed &fixed) const;
    Fixed operator-(const Fixed &fixed) const;
    Fixed operator*(const Fixed &fixed) const;
    Fixed operator/(const Fixed &fixed) const;

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

    // -------------------------------------------------------------------------

private:
    int value;
    static const int fractional_bits = 8;
    void print(const std::string &msg) const;
};

// ----- ex01 ------------------------------------------------------------------

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

// -----------------------------------------------------------------------------

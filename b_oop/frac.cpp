#include "frac.hpp"
#include "gcd.h"

/**
 * Creates a fraction.
*/
Fraction::Fraction(int numerator, int denominator)
{
    if(denominator <= 0)
        throw std::invalid_argument("Denominator must be greater than zero");

    int d = gcd(numerator, denominator);
    this->numerator = numerator / d;
    this->denominator = denominator / d;
}

/**
 * String representation of a fraction.
*/
std::string Fraction::toString()
{
    return std::to_string(this->numerator) + (this->denominator != 1 ? 
        "/" + std::to_string(this->denominator) : 
        "");
}

bool Fraction::operator==(Fraction frac)
{
    return (this->numerator * frac.denominator == this->denominator * frac.numerator);
}

bool Fraction::operator<(Fraction frac)
{
    return (this->numerator * frac.denominator < this->denominator * frac.numerator);
}

Fraction Fraction::operator+(Fraction frac)
{
    return Fraction(this->numerator * frac.denominator + frac.numerator * this->denominator,
        this->denominator * frac.denominator);
}

Fraction Fraction::operator-(Fraction frac)
{
    return this->operator+(frac * Fraction(-1, 1));
}

Fraction Fraction::operator*(Fraction frac)
{
    return Fraction(this->numerator * frac.numerator,
        this->denominator * frac.denominator);
}
#include <iostream>
#include <string>

/**
 * This class allows you to write any Reals
*/
class Fraction
{
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator);
        std::string toString();
        bool operator==(Fraction frac);
        bool operator<(Fraction frac);
        Fraction operator+(Fraction frac);
        Fraction operator-(Fraction frac);
        Fraction operator*(Fraction frac);
};
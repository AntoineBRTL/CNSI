#include "frac.hpp"

int main()
{
    Fraction* f = new Fraction(10, 2);
    std::cout << f->toString() << std::endl;

    return 0;
}
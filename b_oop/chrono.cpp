#include "chrono.hpp"

Chrono::Chrono(int s)
{
    this->s = s;
}

void Chrono::add(int s)
{
    this->s += s;
}

Chrono Chrono::clone()
{
    return Chrono(this->s);
}

bool Chrono::operator == (Chrono c)
{
    return this->s == c.s;
}

Chrono Chrono::operator + (Chrono c)
{
    return Chrono(this->s + c.s);
}

int Chrono::getTime()
{
    return this->s;
}

std::string Chrono::toString()
{
    return std::to_string((this->s / 3600)) + "h " + std::to_string((this->s / 60) % 60) + "m " + std::to_string(this->s % 60) + "s";
}
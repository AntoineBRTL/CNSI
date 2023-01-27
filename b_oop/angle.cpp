#include "angle.hpp"

# define PI 3.14159265358979323846

Angle::Angle(int theta)
{
    this->theta = theta % 360;
}

std::string Angle::toString()
{
    return std::to_string(this->theta) + " degrees";
}

void Angle::add(int theta)
{
    this->theta = (this->theta + theta) % 360;
}

int Angle::getRad()
{
    return this->theta * (PI / 180);
}

double Angle::cos()
{
    return std::cos(this->getRad());
}

double Angle::sin()
{
    return std::sin(this->getRad());
}
#include <iostream>
#include <cmath>
#include <string>
#include <numbers>

class Angle
{
    private:
        int theta;
        int getRad();
    public:
        Angle(int theta);
        std::string toString();
        void add(int theta);
        double cos();
        double sin();
};
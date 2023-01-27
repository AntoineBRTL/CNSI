#include <iostream>

class Interval
{
    private:
        int inter;
        int exter;
        bool isEmpty();

    public:
        Interval(int inter, int exter);
        int length();
        bool contains(int x);
        bool operator==(Interval interval);
        bool operator<=(Interval interval);
        Interval getIntersection(Interval Interval);
        Interval getUnion(Interval Interval);
};
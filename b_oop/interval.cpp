#include "interval.hpp"

Interval::Interval(int inter, int exter)
{
    this->inter = inter;
    this->exter = exter;
}

bool Interval::isEmpty()
{
    return this->exter <= this->inter;
}

int Interval::length()
{
    return this->isEmpty() ? 0 : (this->exter - this->inter + 1);
}

bool Interval::contains(int x)
{
    if(this->isEmpty()) return false;
    return this->inter <= x && this->exter >= x;
}

bool Interval::operator==(Interval interval)
{
    return this->inter == interval.inter && this->exter == interval.exter;
}

bool Interval::operator<=(Interval interval)
{
    return this->inter >= interval.inter && this->exter <= interval.exter;
}

Interval Interval::getIntersection(Interval interval)
{
    // From the correction of M.Labat
    if(*this <= interval) 
        return Interval(this->inter, this->exter);
    if(interval <= *this)
        return Interval(interval.inter, interval.exter);
    if(this->exter < interval.inter || interval.exter < interval.inter)
        return Interval(0, -1);
    if(interval.inter <= this->exter)
        return Interval(interval.inter, this->exter);
    return Interval(this->inter, interval.exter);
    // return Interval(std::max(this->inter, interval.inter), std::min(this->exter, interval.exter));
}

Interval Interval::getUnion(Interval interval)
{
    if(this->isEmpty())
        return Interval(interval.inter, interval.exter);
    if(interval.isEmpty())
        return Interval(this->inter, this->exter);
    return Interval(std::min(this->inter, interval.inter), std::max(this->exter, interval.inter));
}
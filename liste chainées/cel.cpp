#include "cel.hpp"
#include <iostream>

// constructor
Cel::Cel(int value, Cel* next)
{
    this->value = value;
    this->next = next;
}

int Cel::length(Cel* cel)
{
    if(cel == nullptr)
    {
        return 0;
    }

    return 1 + Cel::length(cel->next);
}

Cel* Cel::getAt(int i, Cel* cel)
{
    if(cel == nullptr)
    {
        throw std::out_of_range("Invalid index");
    }

    if(i == 0)
    {
        return cel;
    }

    return Cel::getAt(i - 1, cel->next);
}
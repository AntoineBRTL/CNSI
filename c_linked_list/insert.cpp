#include "insert.hpp"

Cel* insert(int x, Cel* cel)
{
    if(cel == nullptr || cel->value > x)
        return new Cel(x, cel);
    return new Cel(cel->value, insert(x, cel));
}
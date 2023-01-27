#include "inverseConcatenate.hpp"

Cel* inverseConcatenate(Cel* cel1, Cel* cel2)
{
    if(cel1 == nullptr)
        return cel2;
    return inverseConcatenate(cel1->next, new Cel(cel1->value, cel2));
}

Cel* reverse(Cel* cel)
{
    return inverseConcatenate(cel, nullptr);
}
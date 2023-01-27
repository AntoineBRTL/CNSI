#include "same.hpp"

bool same(Cel* cel1, Cel* cel2)
{
    if(cel1 == nullptr)
    {
        return cel2 == nullptr;
    }

    if(cel2 == nullptr)
    {
        return cel1 == nullptr;
    }

    return cel1->value == cel2->value && same(cel1->next, cel2->next);
}
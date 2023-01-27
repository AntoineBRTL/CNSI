#include "find.hpp"

int* recursiveFind(int x, Cel* cel)
{
    if(cel == nullptr)
        return nullptr;
    return cel->value == x ? new int(0) : new int(1 + *recursiveFind(x, cel->next));
}

int* nonRecursiveFind(int x, Cel* cel)
{
    int i = 0;
    while(cel != nullptr)
    {
        if(cel->value == x)
            return new int(i);
        i++;
    }
    return nullptr;           
}
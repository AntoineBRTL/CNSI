#include "occurence.hpp"

int recursiveOccurences(int x, Cel* cel)
{
    if(cel == nullptr)
        return 0;
    return (cel->value == x ? 1 : 0) + recursiveOccurences(x, cel->next);
}

int nonRecursiveOccurences(int x, Cel* cel)
{
    int n = 0;
    while(cel != nullptr)
    {
        n += cel->value == x ? 1 : 0;
        cel = cel->next;
    }
    return n;
}
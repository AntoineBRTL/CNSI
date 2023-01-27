#include "nonRecursiveGetAt.hpp"

Cel* nonRecursiveGetAt(int i, Cel* cel)
{
    int n = 0;
    while(i != n)
    {
        if(cel == nullptr)
        {
            return nullptr;
        }
        cel = cel->next;
        n++;
    }
    return cel;
}
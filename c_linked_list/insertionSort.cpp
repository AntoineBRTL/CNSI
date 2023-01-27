#include "insertionSort.hpp"
#include "insert.hpp"

Cel* insertionSort(Cel* cel)
{
    if(cel == nullptr)
        return cel;
    return insert(cel->value, insertionSort(cel->next));
}
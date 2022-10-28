#include "list.hpp"
#include <iostream>

// constructor
List::List()
{
    head = nullptr;
}

Cel* List::getQueue()
{
    return Cel::getAt(length() - 1, head);
}

int List::length()
{
    return Cel::length(head);
}

int& List::operator[](int i)
{
    return Cel::getAt(i, head)->value;
}

void List::push(int x)
{
    Cel* cel = new Cel(x, nullptr);
    if(head != nullptr)
    {
        Cel* queue = getQueue();
        queue->next = cel;
        return;
    }

    head = cel;
}
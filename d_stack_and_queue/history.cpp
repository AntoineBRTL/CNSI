#include "history.hpp"

History::History()
{
    current = nullptr;
    previous = nullptr;
    after = nullptr;
}

void History::goTo(int x)
{
    if(current != nullptr)
        previous->push(*current);
    current = new int(x);

    after = nullptr;
}

void History::backward()
{
    if(!previous->isEmpty())
    {
        after->push(*current);
        current = new int(previous->pop());
    }
    else
        current = nullptr;
}

void History::forward()
{
    if(!after->isEmpty())
        current = new int(after->pop());
}
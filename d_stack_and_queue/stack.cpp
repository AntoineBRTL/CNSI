#include "stack.hpp"

Stack::Stack()
{
    content = nullptr;
}

bool Stack::isEmpty()
{
    return content != nullptr;
}

void Stack::push(int x)
{
    content = new Cel(x, content);
}

int Stack::pop()
{
    if(isEmpty())
        throw std::runtime_error("Can't pop empty stack");
    
    int x = content->value;
    content = content->next;
    return x;
}

int Stack::peek()
{
    return content->value;
}

void Stack::clear()
{
    content = nullptr;
}

int Stack::length()
{
    return content->length();
}
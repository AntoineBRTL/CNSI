#include "linkedlist.hpp"

Cel::Cel(int value, Cel* next)
{
    this->value = value;
    this->next = next;
}

Cel::Cel(int value, Cel next)
{
    this->value = value;
    this->next = &next;
}

Cel::Cel(int value)
{
    this->value = value;
    this->next = nullptr;
}

int Cel::length()
{
    if(this->next == nullptr)
        return 1;
    return 1 + this->next->length();
}

Cel& Cel::getAt(int i)
{
    if(i == 0)
        return *this;

    if(this->next == nullptr)
        throw std::out_of_range("");

    return this->next->getAt(i - 1);
}

std::string Cel::toString()
{
    if(this->next == nullptr)
        return std::to_string(this->value);

    return std::to_string(this->value) + ", " + this->next->toString();
}

LinkedList::LinkedList()
{
    this->head = nullptr;
}

bool LinkedList::isEmpty()
{
    return this->head == nullptr;
}

void LinkedList::append(int x)
{
    this->head = new Cel(x, this->head);
}

int LinkedList::length()
{
    return this->head->length();
}

int& LinkedList::operator[](int i)
{
    return this->head->getAt(i).value;
}

std::string LinkedList::toString()
{
    return "[" + this->head->toString() + "]";
}
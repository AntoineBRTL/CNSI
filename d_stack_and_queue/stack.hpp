#include <iostream>
#include "../c_linked_list/linkedlist.hpp"

class Stack
{
    private:
        Cel* content;
    public:
        Stack();
        bool isEmpty();
        void push(int x);
        int pop();
        int peek();
        void clear();
        int length();
};
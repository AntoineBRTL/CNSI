#include <iostream>
#include <string>

class Cel
{
    public:
        Cel(int value);
        Cel(int value, Cel next);
        Cel(int value, Cel* next);
        int length();
        Cel& getAt(int i);
        std::string toString();
        int value;
        Cel* next;
};

class LinkedList
{
    private:
        Cel* head;
    
    public:
        LinkedList();
        bool isEmpty();
        void append(int x);
        int length();
        int& operator[](int i);
        std::string toString();
};
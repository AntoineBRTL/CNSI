#include "cel.hpp"

class List
{
    private:
        Cel* head;
        Cel* getQueue();

    public:
        List();

        int length();

        int& operator[](int i);

        void push(int x);
};
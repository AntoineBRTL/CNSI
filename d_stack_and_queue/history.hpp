#include "stack.hpp"

class History
{
    public:
        int* current;
        Stack* previous;
        Stack* after;
    
    public: 
        History();
        void goTo(int x);
        void backward();
        void forward();
};
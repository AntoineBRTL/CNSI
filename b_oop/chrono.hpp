#include <iostream>
#include <string>

class Chrono{
    private: 
        int s;

    public:
        Chrono(int s);

        void add(int s);

        Chrono clone();

        bool operator == (Chrono c);

        Chrono operator + (Chrono c);

        int getTime();

        std::string toString();
};
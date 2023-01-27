#include <iostream>
#include <vector>
#include <string>

class DbTab
{
    private:
        std::vector<int> left; 
        std::vector<int> right;
        int imin();
        int imax();

    public:
        DbTab(std::vector<int> left, std::vector<int> right);
        void append(int x);
        void prepend(int x);
        int& operator[](int i);
        std::string toString();
};
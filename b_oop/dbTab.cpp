#include "dbTab.hpp"

DbTab::DbTab(std::vector<int> left, std::vector<int> right)
{
    this->left = left;
    this->right = right;
}

int DbTab::imin()
{
    return left.size();
}

int DbTab::imax()
{
    return right.size() - 1;
}

void DbTab::append(int x)
{
    right.push_back(x);
}

void DbTab::prepend(int x)
{
    left.push_back(x);
}

int& DbTab::operator[](int i)
{
    if(i >= 0)
        return this->right[i];
    return this->left[this->imin() - i];
}

std::string DbTab::toString()
{
    std::string s = "[";
    int I_MIN = this->imin();
    int I_MAX = this->imax();
    for(int i = 0; i < I_MIN; i++)
    {
        s += std::to_string(this->left[I_MIN - i]);
        s += ", ";
    }
    for(int i = 0; i < I_MAX; i++)
    {
        s += std::to_string(this->right[i]);
        s += ", ";
    }
    s += "]";

    return s; 
}
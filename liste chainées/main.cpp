#include "list.hpp"
#include <iostream>

int main()
{
    List list;
    list.push(1);
    list.push(2);
    list.push(3);

    list[1] = 18;

    std::cout << list.length() << std::endl;
    std::cout << list[1] << std::endl;

    return 0;
}
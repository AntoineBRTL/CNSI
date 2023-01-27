#include "linkedlist.hpp"

int main()
{
    LinkedList* list;
    list = new LinkedList();
    list->append(2);
    list->append(3);
    list->append(7);

    std::cout << list->toString() << std::endl;
    (*list)[0] = 10;
    std::cout << list->toString() << std::endl;
    std::cout << (*list)[0] << std::endl;

    return 0;
}
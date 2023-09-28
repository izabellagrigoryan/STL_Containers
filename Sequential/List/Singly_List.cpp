// Singly_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"

int main()
{
    List<int>* list = new List<int>();

    list->push(5);
    list->push(7);
    list->push(13);
    list->print();

    list->insert(1, 9);
    list->insert(1, 11);

    list->print();

    list->reverse();
    list->print();

    bool is_circle = list->is_circle();

    if (is_circle)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    int value = list->find_n_in_end(2);
    std::cout << "The n value from end is: " << value << std::endl;
    return 0;
}
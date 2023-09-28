// Stack_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Array.h"
#include <iostream>

template <typename T>

class Stack :public Array<T>
{
public:
    Stack<T>() = default;
    ~Stack<T>() = default;

    T top()
    {
        return this->ptr[this->size - 1];
    }
};

int main()
{
    Stack<int> my_stack;

    my_stack.push(4);
    my_stack.push(5);
    my_stack.push(6);

    int m_top = my_stack.top();
    std::cout << "The top of stack is: " << m_top << std::endl;

    my_stack.print();
}
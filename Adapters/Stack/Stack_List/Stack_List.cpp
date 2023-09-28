// Stack_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "List.h"
#include <iostream>

template <typename T>

class Stack :public List<T>
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
    Stack<int> m_stack;
    m_stack.push(11);
    m_stack.push(22);
    m_stack.push(33);
    m_stack.push(44);
    m_stack.push(55);
    m_stack.push(66);
    m_stack.print();

    m_stack.pop();
    m_stack.print();

    m_stack.pop();
    m_stack.print();
}

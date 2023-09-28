#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

template  <typename T>
class Vector {

public:

    int get_size()
    {
        return m_size;
    }

    void init();
    void push_back(T element);
    void pop_back() { m_size--; }
    T operator[](int i) const;
    T& operator[](int i);
    void erase(int element);
    void print();
    T* begin();
    T* end();

    Vector()
    {
        m_capacity = 5;
        m_size = 0;
        m_ptr = new T[m_capacity];
    }

    ~Vector()
    {
        delete[] m_ptr;
    };

private:
    int m_capacity;
    int m_size;
    T* m_ptr;

};

#endif
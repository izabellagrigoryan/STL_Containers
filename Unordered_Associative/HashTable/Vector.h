#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include "List.h"

class HT_Item
{
public:
    int m_key;
    List m_value;

    HT_Item();
    HT_Item(int key, List value)
    {
        m_key = key;
        m_value = value;
    }
};

class Vector 
{
public:

    int get_size()
    {
        return m_size;
    }

    void push_back(HT_Item *ht_item);
    void pop_back() { m_size--; }
    HT_Item operator[](int i) const;
    HT_Item& operator[](int i);
    void print();

    Vector()
    {
        m_capacity = 7;
        m_size = 0;
    }

    ~Vector();

    int m_capacity;
    int m_size;
    HT_Item **HItems_array;
};

#endif

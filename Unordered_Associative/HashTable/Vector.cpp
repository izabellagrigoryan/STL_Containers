#include "Vector.h"

Vector::~Vector()
{
    for (int i = 0; i < m_size; i++)
    {
        if (HItems_array[i]->m_value.m_head == nullptr)
            return;

        while (HItems_array[i]->m_value.m_head)
        {
            Node* temp = HItems_array[i]->m_value.m_head;
            HItems_array[i]->m_value.m_head = HItems_array[i]->m_value.m_head->next;
            delete temp;
        }
    }
}

void Vector::push_back(HT_Item *item)
{
    if (m_size == 0 || m_size >= m_capacity) 
    {
        m_capacity = (m_capacity == 0) ? 1 : m_capacity * 2;
        HT_Item** new_data = new HT_Item * [m_capacity];
        for (size_t i = 0; i < m_size; ++i) {
            new_data[i] = HItems_array[i];
        }
        delete[] HItems_array;
        HItems_array = new_data;
    }
    HItems_array[m_size++] = item;
    
}

HT_Item Vector::operator[](int i) const
{
    if (i >= 0 && i <= m_size)

        return *HItems_array[i];
    else
        return *HItems_array[i];
}

HT_Item& Vector::operator[](int i)
{
    if (i >= 0 && i <= m_size)

        return *HItems_array[i];
    else
        return *HItems_array[i];
}

void Vector::print()
{
    for (int i = 0; i < m_size; i++)
    {
        HItems_array[i]->m_value.print();
    }

    std::cout << std::endl;
}
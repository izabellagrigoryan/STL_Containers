#include "Vector.h"

template class Vector<int>; // Example with int
template class Vector<double>; // Example with double

template <typename T>
void Vector<T>::init()
{
    for (int i = 0; i < 20; i++)
        this->push_back(rand() % 100 + 10);
}

template <typename T>
void Vector<T>::push_back(T element)
{
    if (m_size == m_capacity)
    {
        m_capacity *= 2;
        T* temp = new T[m_capacity];
        for (int i = 0; i < m_size; i++)
            temp[i] = m_ptr[i];

        delete[] m_ptr;
        m_ptr = temp;
    }
    m_ptr[m_size] = element;
    m_size++;
}
template <typename T>
T* Vector<T>::begin()
{
    if (m_ptr[0] != NULL)
        return &(m_ptr[0]);

    return nullptr;
}

template <typename T>
T* Vector<T>::end()
{
    if (m_size >= 1)
        return &(m_ptr[m_size - 1]);

    return nullptr;
}

template <typename T>
T Vector<T>::operator[](int i) const
{
    if (i >= 0 && i <= m_size)

        return m_ptr[i];
    else
        return m_ptr[0];
}
template <typename T>
T& Vector<T>::operator[](int i)
{
    if (i >= 0 && i <= m_size)

        return m_ptr[i];
    else
        return m_ptr[0];
}

template <typename T>
void Vector<T>::erase(int element)
{
    for (int i = element - 1; i < m_size - 1; i++)
        m_ptr[i] = m_ptr[i + 1];

    m_size--;
}

template <typename T>
void Vector<T>::print()
{
    for (int i = 0; i < m_size; i++)
        std::cout << m_ptr[i] << ",  ";
    std::cout << std::endl;

    std::cout << "Capacity = " << m_capacity << std::endl;
    std::cout << "Size = " << m_size << std::endl;
}
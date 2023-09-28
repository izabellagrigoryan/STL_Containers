#include <iostream>
template  <typename T>

class Vector {
    
public:

    int get_size()
    {
        return m_size;
    }

    void push_back(T element)
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

    void pop_back()
    {
        m_size--;
    }

    void erase(int element)
    {
        for (int i = element - 1; i < m_size - 1; i++)
            m_ptr[i] = m_ptr[i + 1];

        m_size--;
    }

    void print() 
    {
        for (int i = 0; i < m_size; i++)
            std::cout << m_ptr[i] << ",  ";
        std::cout << std::endl;

        std::cout << "Capacity = " << m_capacity << std::endl;
        std::cout << "Size = " << m_size << std::endl;
    }

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

int main()
{
    Vector<int> m_vector;
    m_vector.push_back(3);
    m_vector.push_back(5);
    m_vector.push_back(7);
    m_vector.push_back(9);
    m_vector.push_back(11);
    m_vector.print();

    m_vector.pop_back();
    m_vector.pop_back();
    m_vector.print();

    m_vector.push_back(11);
    m_vector.push_back(13);
    m_vector.push_back(15);
    m_vector.print();

    m_vector.erase(3);
    m_vector.print();
}

// Unordered_Set.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Vector.h"
#include <unordered_set>


template <typename T>
void print(std::unordered_set<T> m_set)
{
    for (auto in : m_set)
        std::cout << in << ",  ";
    
    std::cout << std::endl;
}

int main()
{
    Vector<int> m_vector;
    m_vector.init();
    m_vector.print();

    std::unordered_set<int> un_set;
    
    if (m_vector.begin() != nullptr && m_vector.end() != nullptr)
    {
        un_set.insert(m_vector.begin(), m_vector.end());
    }

    print(un_set);

}


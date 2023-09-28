// Delete_Duplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <set>

void init(std::vector<int>& m_vector)
{
    for (int i = 1; i < 3; ++i)
    {
        m_vector.push_back(i + 22);
        m_vector.push_back(i + 53);
        m_vector.push_back(i + 22);
        m_vector.push_back(i);
        m_vector.push_back(i + 53);
        m_vector.push_back(i + 53);
    }
}

std::set<int> delete_duplicates(std::vector<int>& m_vector)
{
    std::set<int> m_set;

    int size = m_vector.size();

    for (int i = 0; i < size; ++i)
    {
        m_set.insert(m_vector[i]);
    }

    return m_set;
}

void print(std::vector<int>& m_vector, int)
{
    for (int i = 0; i < m_vector.size(); ++i)
    {
        std::cout << m_vector[i] << ",  ";
    }

    std::cout << std::endl;
}

void print(std::set<int>& m_set)
{
    std::set<int>::iterator ptr;

    for (ptr = m_set.begin(); ptr != m_set.end(); ptr++)
    {
        std::cout << *ptr << ",  ";
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> my_vector;
    init(my_vector);
    print(my_vector,2);

    std::set<int> my_set = delete_duplicates(my_vector);
    print(my_set);
}
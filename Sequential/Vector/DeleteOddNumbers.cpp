// DeleteOddNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void init(std::vector<int> &m_vector)
{
    for (int i = 0; i < 10; ++i)
    {
        m_vector.push_back(rand()/100 + 1);
    }

}

void delete_odds(std::vector<int> &m_vector)
{
    
    int size = m_vector.size();

    for (int i = 0; i < size; ++i)
    {
        if (m_vector[i] % 2 != 0)
        {
            m_vector.erase(m_vector.begin() + i);
        }

        if (size != (int)m_vector.size())
        {
            --i;
            size = m_vector.size();
        }
    }
}

void print(std::vector<int> &m_vector)
{
    std::vector<int>::iterator ptr = m_vector.begin();

    for (; ptr < m_vector.end(); ptr++)
    {
        std::cout << *ptr << ",  ";
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> my_vector;
    init(my_vector);
    print(my_vector);
   
    delete_odds(my_vector);
    print(my_vector);
}



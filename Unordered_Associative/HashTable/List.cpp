
#include "List.h"
#include <iostream>

void List::init()
{
    for (int i = 0; i < 10; i++)
        this->push(rand() % 100 + 10);
}

void List::push(int new_value)
{
    Node* new_node = new Node(new_value);

    new_node->next = m_head;
    m_head = new_node;
}

void List::insert(int pos, const int& value)
{
    Node* temp = m_head;

    for (int i = 0; i < pos; i++)
    {
        if (temp->next != nullptr)

            temp = temp->next;
    }
    Node* temp_next = new Node(value, temp);
    m_head->next = temp_next;

}

void List::reverse()
{
    Node* prev = nullptr;
    Node* current = this->m_head;
    Node* next = nullptr;
    while (current->next != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    next->next = prev;
    prev = next;
    this->m_head = prev;

}

void List::print()
{
    Node* temp = this->m_head;
    while (temp)
    {
        std::cout << temp->m_value << ",  ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

bool List::is_circle()
{
    Node* prev = m_head;
    Node* current = m_head->next;

    while (current->next != nullptr)
    {
        if (current->next == prev)
        {
            return true;
        }
        current = current->next;
        prev = prev->next;
    }

    return false;
}

int List::find_n_in_end(int n)
{
    Node* temp = m_head;

    for (int i = 1; i < n; i++)
    {
        if (m_head->next != nullptr)
        {
            m_head = m_head->next;
        }
    }

    while (m_head->next != nullptr)
    {
        m_head = m_head->next;
        temp = temp->next;
    }

    return temp->m_value;
}

int& List::operator[](int i)
{
    int  j = 0;
    while (m_head != nullptr && j <= i)
    {
        m_head = m_head->next;
        j++;
    }

    return m_head->m_value;

}


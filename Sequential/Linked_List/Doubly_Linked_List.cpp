// Doubly_Linked_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
template <class T> class Node
{
public:
    T m_value;
    Node* next = nullptr;
    Node* prev = nullptr;

    Node() = default;
    Node(T m_value) :m_value(m_value) {}

};

template <typename T>
class Doubly_List
{
    Node<T>* m_head = nullptr;
public:
    Doubly_List() = default;
    ~Doubly_List() = default;

    void reverse()
    {
        Node<T> *temp = nullptr;
        Node<T> *current = m_head;

        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != nullptr) {
            m_head = temp->prev;
        }
    }

    void push(int new_value)
    {
        Node<T> *new_node = new Node<T>(new_value);

        new_node->prev = nullptr;
        new_node->next = m_head;

        if (m_head != nullptr) {
            m_head->prev = new_node;
        }

        m_head = new_node;
    }

    void print()
    {
        Node<T>* temp = m_head;
        while (temp)
        {
            std::cout << temp->m_value << std::endl;
            temp = temp->next;
        }
        std::cout << std::endl;
    }

};

int main()
{
    Doubly_List<int> *doubly_list = new Doubly_List<int>();

    doubly_list->push(1);
    doubly_list->push(3);
    doubly_list->push(5);
    doubly_list->push(11);

    doubly_list->print();

    doubly_list->reverse();
    doubly_list->print();
}

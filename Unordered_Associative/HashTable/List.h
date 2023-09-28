#ifndef LIST_H
#define LIST_H


class Node
{
public:
    int m_value;
    Node* next = nullptr;

    Node() = default;
    explicit Node(int m_value) :m_value(m_value) {}
    explicit Node(int m_value, Node* next) :m_value(m_value), next(next) {}
};

class List
{
public:
    Node* m_head = nullptr;

    void init();
    void push(int new_value);
    void insert(int pos, const int& value);
    void reverse();
    void print();
    bool is_circle();
    int find_n_in_end(int n);

    int& operator[](int i);

    List() = default;
    ~List() = default;
};

#endif


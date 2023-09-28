#include "Binary.h"
#include <iostream>
#include <queue>

void Tree::init()
{
    //initialization of the binary tree.
    std::cout << "                    ";
    root = new Node(25);
    std::cout << root->m_data << std::endl;
    root->left = new Node(20);
    root->right = new Node(36);
    std::cout << "               ";
    std::cout << root->left->m_data << "       " << root->right->m_data << std::endl;

    root->left->left = new Node(10);
    root->left->right = new Node(22);
    root->right->left = new Node(30);
    root->right->right = new Node(40);
    std::cout << "          ";
    std::cout << root->left->left->m_data << "     " << root->left->right->m_data << "     ";
    std::cout << root->right->left->m_data << "     " << root->right->right->m_data << "     " << std::endl;

    root->left->left->left = new Node(5);
    root->left->left->right = new Node(12);
    root->left->right->left = new Node(55);
    root->left->right->right = new Node(34);
    root->right->left->left = new Node(28);
    root->right->left->right = new Node(67);
    root->right->right->left = new Node(38);
    root->right->right->right = new Node(48);
    std::cout << "        ";
    std::cout << root->left->left->left->m_data << "  " << root->left->left->right->m_data << "  ";
    std::cout << root->left->right->left->m_data << "  " << root->left->right->right->m_data << "  ";
    std::cout << root->right->left->left->m_data << "  " << root->right->left->right->m_data << "  ";
    std::cout << root->right->right->left->m_data << "  " << root->right->right->right->m_data << "  " << std::endl;
    std::cout << std::endl;
}

//functions of traversal without recursion
void Tree::print_inorder()
{
    std::queue<Node*> m_queue;
   
    Node* current = root;

    while (current != nullptr || m_queue.empty() == false)
    {
        while (current != nullptr)
        {
            m_queue.push(current);
            current = current->left;
        }

        current = m_queue.front();
        std::cout << current->m_data << " ";
        current = current->right;
        m_queue.pop();
        
    }
}

void Tree::print_preorder()
{
    if (root == nullptr)
        return;
    std::queue<Node*> m_queue;

    Node* current = root;

    m_queue.push(root);
   
    while (current != nullptr && m_queue.empty() == false)
    {
        current = m_queue.front();
        m_queue.pop();
        std::cout << current->m_data << " ";
        
        if (current->left != nullptr)
            m_queue.push(current->left);
        if (current->right != nullptr)
            m_queue.push(current->right);
    }

}

void Tree::print_postorder()
{
    if (root == nullptr)
        return;
    std::queue<Node*> m_queue1;
    std::queue<Node*> m_queue2;

    Node* current = root;
    m_queue1.push(current);
     
    while (!m_queue1.empty())
    {
        current = m_queue1.front();
        m_queue1.pop();

        m_queue2.push(current);
        
        if (current->left != nullptr)
            m_queue1.push(current->left);
        // Push the right child of the top element
        if (current->right != nullptr)
            m_queue1.push(current->right);
    }
    // Print the second stack
    while (!m_queue2.empty())
    {
        current = m_queue2.front();
        std::cout << current->m_data << " ";
        m_queue2.pop();
    }
}

//functions of traversal with recursion
void Tree::print_inorder(Node* node)
{
    if (node == NULL)
        return;
 
    print_inorder(node->left);
    std::cout << node->m_data << " ";
    print_inorder(node->right);
}

void Tree::print_preorder(Node* node)
{
    if (node == NULL)
        return;
    
    std::cout << node->m_data << " ";
    print_preorder(node->left);
    print_preorder(node->right);
}

void Tree::print_postorder(Node* node)
{
    if (node == NULL)
        return;

    print_postorder(node->left);
    print_postorder(node->right);
    std::cout << node->m_data << " ";

}
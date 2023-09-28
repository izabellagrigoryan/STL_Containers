// Binary_Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Binary.h"

int main()
{
    Tree m_tree;
    m_tree.init();

    std::cout << "Inorder traversal (recursion)" << std::endl;
    m_tree.print_inorder(m_tree.root);
    std::cout << std::endl << std::endl;

    std::cout << "Preorder traversal (recursion)" << std::endl;
    m_tree.print_preorder(m_tree.root);
    std::cout << std::endl << std::endl;

    std::cout << "Postorder traversal (recursion)" << std::endl;
    m_tree.print_postorder(m_tree.root);
    std::cout << std::endl << std::endl;

    std::cout << "Inorder traversal without recursion" << std::endl;
    m_tree.print_inorder();
    std::cout << std::endl << std::endl;

    std::cout << "Preorder traversal without recursion" << std::endl;
    m_tree.print_preorder();
    std::cout << std::endl << std::endl;

    std::cout << "Postorder traversal without recursion" << std::endl;
    m_tree.print_postorder();
    std::cout << std::endl << std::endl;

    return 0;
}

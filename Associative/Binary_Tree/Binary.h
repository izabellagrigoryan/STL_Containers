#ifndef BINARY_H
#define BINARY_H

#include <vector>

class Node {
public:
	Node* left;
	Node* right;
	int m_data;

	Node(int value) { m_data = value; left = nullptr; right = nullptr; }
	~Node() {}
};

class Tree {
public:
	Node* root;
	
	void init();
	
	//functions without recursion
	void print_inorder();
	void print_preorder();
	void print_postorder();

	//functions with recursion
	void print_inorder(Node*);
	void print_preorder(Node*);
	void print_postorder(Node*);
};
#endif

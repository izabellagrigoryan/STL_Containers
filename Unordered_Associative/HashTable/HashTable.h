#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Vector.h"

class HashTable
{
public:
	int table_size;
	Vector *table;

	explicit HashTable(int key);

	int hash_function(int key) {
		return (key % table_size);
	}

	void insert(int key);
	void print_HashTable();
};

#endif

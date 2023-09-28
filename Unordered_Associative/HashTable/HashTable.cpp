// HashTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "HashTable.h"

HashTable::HashTable(int table_size)
{
	this->table_size = table_size;
	this->table = new Vector();
};

void HashTable::insert(int key)
{
	int index = hash_function(key);
	List m_list;
	m_list.init();

	HT_Item *item = new HT_Item(index, m_list);
	table->push_back(item);
};

void HashTable::print_HashTable()
{
	for (int i = 0; i < table_size; i++)
	{
		if (table[i].HItems_array)
		{
			std::cout << table->HItems_array[i]->m_key << " -> ";
			table->HItems_array[i]->m_value.print();
		}
		std::cout << std::endl;
	}
};

int main()
{
    int vec_size = 7;

    HashTable m_table(vec_size);

    // initialize vector that contains 7 lists
    for (int i = 0; i < vec_size; i++)
    {
        m_table.insert(i + 35);
    }

	m_table.print_HashTable();

	return 0;
}


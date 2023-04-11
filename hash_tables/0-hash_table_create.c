#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of the hashtable
 * Return: pointer to hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *mnode;

	table = malloc(sizeof(int) * size);
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	mnode = malloc(sizeof(int) * size);
	if (mnode == NULL)
	{
		return (NULL);
	}
	table->array = &mnode;

	return (table);
}

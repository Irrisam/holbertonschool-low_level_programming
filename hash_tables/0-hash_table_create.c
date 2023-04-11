#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of the hashtable
 * Return: pointer to hashtable created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *bite;
	hash_node_t *mnode;

	bite = malloc(sizeof(hash_table_t) * size);
	bite->size = size;
	mnode = malloc(sizeof(hash_node_t) * size);
	if (mnode == NULL)
	{
		return (NULL);
	}
	bite->array = &mnode;

	return (bite);
}

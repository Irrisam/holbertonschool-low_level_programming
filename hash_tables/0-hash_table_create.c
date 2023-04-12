#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of the hashtable
 * Return: pointer to hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size + 1);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

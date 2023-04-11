#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of the hashtable
 * Return: pointer to hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	
	table = malloc(sizeof(unsigned long int) * size + 16);
	
	if (table == NULL)
	{
		return (NULL);
	}
	return (table);
}

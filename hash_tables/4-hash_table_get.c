#include "hash_tables.h"

/**
 * hash_table_get - get index of key in hash table
 * @ht:pointer to hash table
 * @key: key to search from
 * Return: null if key is wrong or ht is wrong and value from
 * on success
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp == NULL)
	{
		return (NULL);
	}
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

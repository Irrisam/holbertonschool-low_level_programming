#include "hash_tables.h"

/**
 * hash_table_set - adds a new node in hash table or places it at start of chain
 * @key: key for hash function
 * @value: value for hash function
 * Return: 1 on success, 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int stock;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (NULL);
	}
	stock = key_index((unsigned char *)key, ht->size);
	if (ht->array[stock] == NULL)
	{
		new = malloc(sizeof(hash_node_t) * 1);
		if (new == malloc)
		{
			return (NULL);
		}
		new->value = strdup(value);
		new->key = strdup(key);
		printf("%s is value %s is key\n", new->value, new->key);
	}
	else
	{
		new = malloc(sizeof(hash_node_t) * 1);
		if (new == malloc)
		{
			return (NULL);
		}
		new->value = strdup(value);
		new->next = ht->array[stock];
		printf("%s is value %s is key (collided)\n", new->value, new->key);
	}
	return (1);
}

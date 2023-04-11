#include "hash_tables.h"

/**
 * hash_table_set - adds a new node in hash table or places
 * it at start of chain
 * @ht: hash table to fill
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
		return (0);
	}
	stock = key_index((unsigned char *)key, ht->size);
	if (ht->array[stock] == NULL)
	{
		new = malloc(sizeof(hash_node_t) * 1);
		if (new == NULL)
		{
			return (0);
		}
		new->value = strdup(value);
		new->key = strdup(key);
		ht->array[stock] = new;
	}
	else
	{
		while (ht->array[stock] != NULL)
		{
			if (strcmp(ht->array[stock]->key, key) == 0)
			{
				ht->array[stock]->value = strdup(value);
				return(1);
			}
			ht->array[stock] = ht->array[stock]->next;
		}
		new = malloc(sizeof(hash_node_t) * 1);
		if (new == NULL)
		{
			return (0);
		}
		new->value = strdup(value);
		new->key = strdup(key);
		new->next = ht->array[stock];
		ht->array[stock] = new;

	}
	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_print - prints out a whole has table
 * @ht: has table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int counter = 0;
	char *coma = "";
	hash_node_t *buffer = NULL;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (counter <= ht->size)
	{
		if (ht->array[counter] == NULL)
		{
			counter++;
		}
		else
		{
			buffer = ht->array[counter];
			tmp = ht->array[counter];

			while (tmp->next)
			{
				tmp = tmp->next;
				printf("%s'%s': '%s'", coma, tmp->key, tmp->value);
			}
			printf("%s'%s': '%s'", coma, buffer->key, buffer->value);
			counter++;
			coma = ", ";
		}
	}
	printf("}\n");
}

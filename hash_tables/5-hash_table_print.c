#include "hash_tables.h"

/**
 * hash_table_print - prints out a whole has table
 * @ht: has table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int counter = 0;
	int shamecounter = 0;
	char *coma = "";
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
			tmp = ht->array[counter];

			if (tmp->next == NULL)
			{
				printf("%s'%s': '%s'", coma, tmp->key, tmp->value);
				coma = ", ";
				counter++;
			}
			else
			{
				while (tmp->next)
				{
					if (shamecounter == 0)
					{
						printf("%s'%s': '%s'", coma, tmp->key, tmp->value);
						shamecounter++;
					}
					else
					{
						tmp = tmp->next;
						printf("%s'%s': '%s'", coma, tmp->key, tmp->value);
						coma = ", ";
					}
				}
				shamecounter = 0;
				counter++;
			}
		}
	}
	printf("}\n");
}

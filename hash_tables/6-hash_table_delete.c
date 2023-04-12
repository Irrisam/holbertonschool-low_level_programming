#include "hash_tables.h"

/**
 * 
*/

void hash_table_delete(hash_table_t *ht)
{
    
    unsigned long int counter = 0;
    hash_node_t *tmp = NULL;
    hash_node_t *runner = NULL;

	if (ht == NULL)
	{
		return;
	}
    if (ht->array == NULL)
    {
        free(ht->array);
        free(ht);
    }
    runner = ht->array[counter];
    tmp = ht->array[counter];

	while (counter < ht->size)
	{
        if (ht->array[counter])
        {
            tmp = ht->array[counter];
			while (tmp)
			{
                 runner = tmp->next;
                 free(tmp->value);
                 tmp->value = NULL;
                 free(tmp->key);
                 tmp->key = NULL;
                 free(tmp);
                 tmp = runner;
                 
			}
        }
        counter++;
	}
    free(ht->array);
    free(ht);
}
#include "lists.h"

/**
 *  * free_dlistint - free list
 *@head: given list to free
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

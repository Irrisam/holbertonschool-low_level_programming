#include "lists.h"

/**
 * free_list - frees the given linked list
 * @head: given pointer to first node of list
*/
void free_list(list_t *head)
{
	list_t *tmp = NULL;
	list_t *new = NULL;

	new = head;

	while (new)
	{
	tmp = new;
	new = new->next;
	free(tmp->str);
	free(tmp);
	}
}

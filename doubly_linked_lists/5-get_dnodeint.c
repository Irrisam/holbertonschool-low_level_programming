#include "lists.h"

/**
 * get_dnodeint_at_index - gets index node
 * @head: pointer to list
 * @index: number of node to be retreived
 * Return: poitner to index node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (head);
	}
	else
	{
		while (counter != index)
		{
			head = (head)->next;
			counter++;
		}
	}
	return (head);
}

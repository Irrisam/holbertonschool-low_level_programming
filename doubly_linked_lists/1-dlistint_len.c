#include "lists.h"

/**
 * print_dlistint - prints list given
 * @h: given pointer to list
 * Return: count of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head = NULL;
	int count = 0;

	head = (dlistint_t *) h;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}

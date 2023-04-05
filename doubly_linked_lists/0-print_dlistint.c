#include "lists.h"

/**
 * print_dlistint - prints list given
 * @h: given pointer to list
 * Return: count of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = NULL;
	int count = 0;

	head = (dlistint_t *) h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}

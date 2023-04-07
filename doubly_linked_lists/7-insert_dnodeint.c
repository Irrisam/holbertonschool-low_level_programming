#include "lists.h"

/**
 * insert_dnodeint_at_index - indert a node a index pos in a list
 * @h: pointer to list
 * @idx: index of number to stop at
 * @n: value of node
 * Return: pointer to list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;

	tmp = *h;

	if (*h == NULL)
	{
		return (*h);
	}
	while (counter != idx)
	{
		if ((*h)->next == NULL)
		{
			return (0);
		}
		*h = (*h)->next;
		counter++;
	}
	new = malloc(sizeof(dlistint_t) * 1);

	new->n = n;
	new->prev = *h;
	new->next = (*h)->next;
	(*h)->next->prev = new;
	(*h)->next = new;
	*h = tmp;
	return (*h);
}

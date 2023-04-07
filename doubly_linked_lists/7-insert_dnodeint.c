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

	if (tmp == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		*h = add_dnodeint(h, n);
		return (0);
	}
	while (counter != idx)
	{
		if (tmp->next)
		{
		tmp = tmp->next;
		counter++;
		}
		else
		{
			return(NULL);
		}
	}
	if (tmp->next == NULL)
	{
		return(add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t) * 1);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}

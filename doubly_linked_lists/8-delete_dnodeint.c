#include "lists.h"

/**
 * insert_dnodeint_at_index - indert a node a index pos in a list
 * @h: pointer to list
 * @idx: index of number to stop at
 * @n: value of node
 * Return: pointer to list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *tmp = NULL;
	tmp = *head;

	if (tmp == NULL && index != 0)
	{
		return (-1);
	}
	if (tmp->prev == NULL && index == 0)
	{
		*head = tmp->next;
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}

	while (counter != index - 1)
	{
		if (tmp->next)
		{
		tmp = tmp->next;
		counter++;
		}
		else
		{
			return(0);
		}
	}
    if (tmp->prev == NULL)
    {
        return(-1);
    }
    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
	*head = tmp->prev;
	return (1);
}

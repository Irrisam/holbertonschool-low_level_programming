#include "lists.h"

/**
 * add_dnodeend - adds a node at the end of the list
 * @head: given pointer to list
 * @n : given data (int)
 * Return: pointer to list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *start;

	start = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->prev = NULL;
	tmp->next = NULL;
	tmp->n = n;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	else
	{
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		(*head)->next = tmp;
		tmp->prev = *head;
		*head = start;
	}
	return (*head);
}


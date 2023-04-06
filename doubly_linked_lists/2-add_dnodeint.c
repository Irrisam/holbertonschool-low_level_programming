#include "lists.h"

/**
 * add_dnodeint - adds a node in a list
 * @head: given pointer to list
 * @n : given data (int)
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (head == NULL)
	{
		return(tmp);
	}
	else
	{
		tmp->prev = NULL;
		tmp->next = *head;
		tmp->n = n;
	}
	*head = tmp;
	return(*head);
}

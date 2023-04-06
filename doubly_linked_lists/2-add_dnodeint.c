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
	}
	else
	{
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
	}
	return (*head);
}

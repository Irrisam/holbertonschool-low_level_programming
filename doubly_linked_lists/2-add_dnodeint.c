#include "lists.h"

/**
 * add_dnodeint - adds a node in a list
 * @head: given pointer to list
 * @n : given data (int)
 * Return: pointer to new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (0);
	}

	if (head == NULL)
	{
		return (0);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

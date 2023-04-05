#include "lists.h"

/**
 * add_dnodeint - adds a node in a list
 * @head: given pointer to list
 * @n : given data (int)
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	current->n = n;
	if (head == NULL)
	{
	return (0);
	}
	else
	{
	current->next = *head;
	current->prev = current;
	}
	*head = current;
	return (*head);
}

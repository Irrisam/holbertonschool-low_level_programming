#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds new datas to linked list
 * @str: str to put in data
 * @head: linked list
 * Return: pointer to resulting
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (0);
	}

	if (head == NULL)
	{
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

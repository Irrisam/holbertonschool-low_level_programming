#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * add_node_end - adds new datas at the end to linked list
 *   * @str: str to put in data
 *    * @head: linked list
 *     * Return: pointer to resulting
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t) * 1);

	if (!new_node)
		return (NULL);

	tmp = *head;

	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	return (new_node);
}

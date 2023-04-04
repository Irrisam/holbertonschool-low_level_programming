#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * add_node_end - adds new datas at the end to linked list
 *   * @str: str to put in data
 *    * @head: linked list
 *     * Return: pointer to resulting
 *      */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

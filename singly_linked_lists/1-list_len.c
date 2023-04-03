#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of arguments
 * @h: given linked list
 * Return: count of arguments
*/

size_t list_len(const list_t *h)
{
	list_t *head = NULL;
	int count = 0;

	head = (list_t *) h;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}

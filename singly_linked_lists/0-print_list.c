#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints every container of h*
 * @h: given linked list
 * Return: count of printed arguments
*/

size_t print_list(const list_t *h)
{

	list_t *head = NULL;
	int count = 0;

	head = (list_t *) h;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			head = head->next;
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
			count++;
			head = head->next;
		}
	}
	return (count);
}

#include "lists.h"

/**
 * sum_dlistint - prints back the sum of all n values in list
 * @head: pointer to list to add numbers from
 * Return: sum of numbers
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
	{
		return (count);
	}
	while (head)
	{
		count += head->n;
		head = (head)->next;
	}
	return (count);

}

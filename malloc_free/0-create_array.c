#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates and initialized an array of size size and
 * filled with char c
 * @size: size of array
 * @c: chars to fill it with
 * Return: Pointer to that value
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (0);
	}
	if (array == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	for (; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

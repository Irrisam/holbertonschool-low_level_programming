#include "main.h"
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

	if (array == NULL)
	{
		return (0);
	}
	for (; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

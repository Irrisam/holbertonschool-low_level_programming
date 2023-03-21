#include "function_pointers.h"

/**
 * int_index - checks for ints
 * @size: size of array to check in
 * @cmp: pointer to function
 * @array: array to check in
 * Return: index of first
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
	return (0);
	}

	for (; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}

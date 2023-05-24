#include <stdio.h>

/**
 * linear_search - searches for a value in a linear array
 * @size: size of array
 * @value : size to search for
 * @array: pointer to given array to search in
 * Return: index of found value on success, -1 on failure
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i <= size - 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

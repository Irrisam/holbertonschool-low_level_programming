#include "function_pointers.h"

/**
 * array_iterator - iterates through array to get values to operazte on
 * @size: size of array
 * @action: pointer to function to use
 * @array: stores values
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array != NULL)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
	return;
	}

}

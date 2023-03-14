#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * array_range - prints an array of ints
 *   * @min: min value of ints
 *    * @max: max value of ints
 *     *
 *      * Return: Nothing.
 *       */
int *array_range(int min, int max)
{
	int i = 0;
	int *array = NULL;

	if (min > max)
	{
		return (0);
	}
	array = malloc(max * sizeof(int) + 1);

	if (array == NULL)
	{
		return (0);
	}

	for (; i <= max; i++)
	{
		array[i] = i;
	}

	return (array);

}

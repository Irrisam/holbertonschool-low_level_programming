#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * _calloc - a function that allocates memory for an array, using malloc.
 *   * @nmemb: allocates memory for an array of nmbmemb elements
 *    * @size: the size of the bytes
 *     *
 *      * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int i = 0;
	char *array = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (; i < nmemb * size; i++)
	{
		array[i] = 0;
	}
	return (array);
}

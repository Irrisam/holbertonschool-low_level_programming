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
	int **array = NULL;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * sizeof(size));

	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}

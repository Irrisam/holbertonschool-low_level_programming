#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *  * malloc_checked - checkign if malloc is valid
 *   *@b: size of malloc to be made
 *    * Return: pointer tot new string
 */

void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}

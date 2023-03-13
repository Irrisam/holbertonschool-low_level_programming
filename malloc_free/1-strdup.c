#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * _strdup - copies string into another string
 * @str: string to be copied
 *    * Return: copied string.
 */

char *_strdup(char *str)
{
	int compteur = 0;
	int compteur2 = 0;
	char *array;

	if (str == NULL)
	{
		return (0);
	}
	for (; str[compteur] != '\0'; compteur++)
	{
	}

	array = malloc(compteur * sizeof(char) + 1);

	if (array == 0)
	{
		return (0);
	}

	for (; compteur2 < compteur; compteur2++)
	{
		array[compteur2] = str[compteur2];
	}
	return (array);
}

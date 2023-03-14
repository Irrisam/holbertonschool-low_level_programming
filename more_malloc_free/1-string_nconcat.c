#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * string_nconcat - concatenates strings
 *   *@s1: frist string
 *   *@s2: second string
 *   *@n: max size for s2
 *    * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int compteur1 = 0;
	unsigned int compteur2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *array = "";

	for (; s1[compteur1] != '\0'; compteur1++)
	{
	}
	for (; s2[compteur2] != '\0'; compteur2++)
	{
	}
	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	array = malloc((compteur1 + compteur2 * 1) + 2);
	if (array == NULL)
	{
		return (0);
	}
	for (; i < compteur1; i++)
	{
		array[i] = s1[i];
	}
	if (compteur2 >= n)
	{
		compteur2 = n;
	}
	for (; j < compteur2; i++, j++)
	{
		array[i] = s2[j];
	}
	array[i] = '\0';

	return (array);
}

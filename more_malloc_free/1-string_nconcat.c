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
	int compteur1 = 0;
	int compteur2 = 0;
	int i = 0;
	int j = 0;
	int nfake = 0;
	char *array = "";

	nfake = n;

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

	array = malloc((s1[compteur1] + s2[compteur2]) + 2);

	for (; i < compteur1; i++)
	{
		array[i] = s1[i];
	}
	for (; j < nfake; i++, j++)
	{
		array[i] = s2[j];
	}
	array[i + 1] = '\0';

return (array);
}

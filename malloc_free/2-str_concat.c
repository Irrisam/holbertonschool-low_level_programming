#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * str_concat - concatenates strings
 *  *@s1: first string
 *    *@s2: second string
 *    Return: array of concatated strings
 */

char *str_concat(char *s1, char *s2)

{
	char *array = "";
	int compteur1 = 0;
	int compteur2 = 0;
	int i = 0;
	int j = 0;

	for (; s1[compteur1] != '\0'; compteur1++)
	{
	}
	for (; s2[compteur2] != '\0'; compteur2++)
	{
	}
	array = malloc((compteur1 + compteur2) * sizeof(char) + 1);
	for (; i < compteur1 ; i++)
	{
		array[i] = s1[i];
	}
	for (i = compteur1; i < (compteur1 + compteur2 + 1); i++, j++)
	{
		array[i] = s2[j];
	}
	return (array);

}

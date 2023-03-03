#include "main.h"

/**
 * _strstr - searches for needle substring in haystack
 *@haystack: string to search for substring in
 *@needle: substring to be found
 *Return: pointer to start of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int compteurhay = 0;
	int compteurnee = 0;
	int i = 0;
	int j = 0;

	while (*haystack != '\0')
	{
		compteurhay++;
		haystack++;
	}
	while (*needle != '\0')
	{
		compteurnee++;
		needle++;
	}
	for (; i <= compteurhay - compteurnee; i++)
	{
		for (; j < compteurnee; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
	}
	if (j == compteurnee)
	{
		return (haystack + i);
	}
	return (0);
}

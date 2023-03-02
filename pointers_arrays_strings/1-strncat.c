#include "main.h"

/**
 * _strncat - appends src string to end of dest string to n max size
 * @dest: string to apprend
 * @src: string to be appended to
 * @n: given max size of array
 * Return: finished string
 */

char *_strncat(char *dest, char *src, int n)
{
	int compteursrc = 0;
	int compteurdest = 0;

	while (dest[compteurdest] != '\0')
	{
		compteurdest++;
	}
	while (compteursrc < n && src[compteursrc] != '\0')
	{
		dest[compteurdest + compteursrc] = src[compteursrc];
		compteursrc++;
	}
	dest[compteursrc + compteurdest] = '\0';
	return (dest);
}

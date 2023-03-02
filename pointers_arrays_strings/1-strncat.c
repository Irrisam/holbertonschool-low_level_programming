#include "main.h"

/**
 * _strcat - appends src string to end of dest sring
 * @dest: string to apprend
 * @src: string to be appended to
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
		dest[compteurdest + compteursrc] = src[compteurdest];
		compteursrc++;
	}
	dest[compteursrc + compteurdest] = '\0';
	return (dest);
}

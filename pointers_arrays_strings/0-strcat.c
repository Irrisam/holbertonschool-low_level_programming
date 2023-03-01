#include "main.h"

/**
 * _strcat - appends src string to end of dest sring
 * @dest: string to apprend
 * @src: string to be appended to
 * Return: finished string
 */

char *_strcat(char *dest, char *src)
{
	int compteursrc = 0;
	int compteurdest = 0;

	while (dest[compteurdest] != '\0')
	{
		compteurdest++;
	}
	while (src[compteursrc] != '\0')
	{
		dest[compteurdest++] = src[compteursrc++];
	}
	dest[compteurdest] = src[compteursrc];
	return (dest);
}

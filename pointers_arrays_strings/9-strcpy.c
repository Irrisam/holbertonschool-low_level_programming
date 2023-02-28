#include "main.h"

/**
 *_strcpy - tranfers char array from srx to dest
 *@src: src array of chars
 *@dest:dest array of chars
 * Return: array of copied string
*/

char *_strcpy(char *dest, char *src)
{
	int compteur = 0;
	int i;

	while (src[compteur] != '\0')
	{
	compteur++;
	}

	for (i = 0 ; i < compteur; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

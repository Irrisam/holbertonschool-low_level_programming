#include "main.h"

/**
 *  * _strncpy - appends a copy of src string to end of dest sring
 *   * @dest: string to apprend
 *    * @src: string to be appended to
 *    *@n: number of max string
 *     * Return: finished string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int compteursrc = 0;
	int compteurdest = 0;

	while (src[compteursrc] != '\0')
	{
		compteursrc++;
	}
	while (compteurdest < n && dest[compteurdest] != '\0')
	{
		dest[compteurdest] = src[compteurdest];
		compteurdest++;
	}
	dest[compteursrc + compteurdest] = '\0';
	return (dest);
}


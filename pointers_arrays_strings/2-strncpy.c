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

	while (compteursrc < n && src[compteursrc] != '\0')
	{
		dest[compteursrc] = src[compteursrc];
		compteursrc++;
	}
	while (compteursrc < n)
	{
		dest[compteursrc++] = '\0';
	}
	return (dest);
}


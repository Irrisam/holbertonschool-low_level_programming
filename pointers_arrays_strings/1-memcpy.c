#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies memory from src to dest
 *@src: src string to copy
 *@dest: dest string to be copied to
 *@n: given size of addresses
 * Return: dest pointer to copied file
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int compteur = 0;

	for (; compteur < n; compteur++)
	{
		*(dest + compteur) = *(src + compteur);
	}
	return (dest);
}

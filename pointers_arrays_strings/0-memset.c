#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 * @s:memory pointed at
 * @b:constant byte value
 * @n:number of bytes to be filled
 * Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int compteur = 0;

	for (compteur = 0; compteur < n; compteur++)
	{
	*(s + compteur) = b;
	}
	return (0);
}

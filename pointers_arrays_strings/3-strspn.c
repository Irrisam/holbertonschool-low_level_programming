#include "main.h"

/**
 * _strspn - searches for prefixes in *s
 *  @s:string to search in
 *   @accept: prefix to look for
 *   Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int compteur = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				compteur++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			return (compteur);
		}
		s++;
	}
	return (compteur);
}

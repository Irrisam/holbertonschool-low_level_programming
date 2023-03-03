#include "main.h"

/**
 * _strchr - seeks out first occurence of c charactere in s string
 * @s:string to be searched
 * @c:char to be searched for
 * Return: first occurence of char
 */

char *_strchr(char *s, char c)
{
	int compteur = 0;

	for (; *s != c ; compteur++)
	{
		if ((*s + compteur) == c)
		{
			return (s);
		}
	}
	return (0);
}

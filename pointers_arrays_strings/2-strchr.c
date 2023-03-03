#include "main.h"

/**
 * _strchr - seeks out first occurence of c charactere in s string
 * @s:string to be searched
 * @c:char to be searched for
 * Return: first occurence of char
 */

char *_strchr(char *s, char c)
{
	if (c != '\0')
	{
		return (0);

		for (; *s != '\0' ; s++)
		{
			if (*s  == c)
			{
				return (s);
			}
			if (*s == c)
			{
				return (0);
			}
		}
	}
	return (0);
}

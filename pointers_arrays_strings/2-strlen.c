#include "main.h"
#include <stdio.h>

/**
 * _strlen - counts the number of iterations
 *@s: inputedf char
 * Return: number of chars in string
*/

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

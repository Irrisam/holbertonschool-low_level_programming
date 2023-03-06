#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: string to be printed
 *
 */

void _puts_recursion(char *s)
{
	printf("%c", *s);
	s++;

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	if (*s == '\0')
	{
		printf("\n");
	}
}

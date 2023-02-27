#include "main.h"

/**
 * print_rev - reverse prints
 *@s: reversed string
 *
*/

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar(10);
}


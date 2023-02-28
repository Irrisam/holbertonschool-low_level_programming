#include "main.h"

/**
 * puts_half - prints half of  astring
 * @str: str to be splitted
 */

void puts_half(char *str)
{
	int a = 0;
	int value;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 != 0)
	{
		value = (a - 1) / 2;
	}
	else
	{
		value = (a / 2);
	}
	while (value <= a)
	{
		_putchar(str[value]);
		value++;
	}
	_putchar(10);
}

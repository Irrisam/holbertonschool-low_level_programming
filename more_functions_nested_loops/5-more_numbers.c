#include "main.h"

/**
 * more_numbers - prints 1 - 14 10times
 * Return: void
*/

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
				_putchar(x % 10 + '0');
		}
	_putchar(10);
	}
}

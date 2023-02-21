#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 * Return: 0
*/
void print_alphabet_x10(void)

{
int x = 0;

	while (x < 11)
	{
		int i = 97;

		for (; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	x++;
	}
}

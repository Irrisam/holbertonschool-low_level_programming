#include "main.h"

/**
 * print_sign - checks for char type
 * @n: input for function
 * Return: 0
*/
int print_sign(int n)

{
	int x = 0;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	if (n < 0)
	{
		x = -1;
		_putchar('-');
	}
	return (x);

}

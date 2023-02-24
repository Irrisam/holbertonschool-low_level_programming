#include "main.h"
/**
 * print_line - prionts n lines
 * @n: lenght of the line
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar(10);
}

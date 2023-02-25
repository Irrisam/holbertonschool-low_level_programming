#include "main.h"
/**
 * print_diagonal - prionts n lines
 * @n: lenght of the line
 */

void print_diagonal(int n)
{
	int i;
	int j = 0;
	
	if (n > 0)
	{
		while (n > 0)
		{
			i = 0;
			while (i < j)
			{
				_putchar(32);
				i++;
			}
			n--;
			_putchar(92);
			_putchar(10);
			j++;
		}
	}
	else
	{
		_putchar(32);
	}
}

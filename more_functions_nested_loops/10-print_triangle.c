#include "main.h"

/**
 * print_triangle - prints int size sized triangle
 * @size: triangle's size
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		k = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			k--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

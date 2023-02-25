#include "main.h"

/**
 *  * print_square - square of int size size
 *   * @size: square sizes
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar(10);
			i++;
		}
	}
	else
	{
		_putchar(10);
	}
}

#include "main.h"

/**
 * _pow_recursion - returns x power y
 * @x: multiplicator
 * @y: exposant
 * Return: x pow to y
 */

int _pow_recursion(int x, int y)

{
	if (x == 0)
	{
	return (0);
	}
	if (y <= 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

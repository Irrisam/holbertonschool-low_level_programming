#include "main.h"

/**
 * factorial - returns factorial value of n
 * @n: value to be found
 * Return: factorial value
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
